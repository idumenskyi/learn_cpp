//error no matching function for call to 'std::exception::exception(const char *&)'
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class MyException: public exception
{
public:
    MyException(char *msg, int dataState): exception(msg)
    {
        this -> dataState = dataState;
    }
    int GetDataState() { return dataState; }
private:
    int dataState;
};
void Func(int value)
{
    if(value < 0)
    {

       throw "Number is less than 0";
    }
    if(value == 1)
    {
        throw MyException("Number 0 ", value);
    }
    cout << "variable = " << value << endl;
}
int main()
{
    try
    {
        Func(1);
    }
    catch(MyException &ex)
    {

        cout << "Block 1, we catched " << ex.what() << endl;
        cout << "State of data" << ex.GetDataState() << endl;
    }

    return 0;
}
