#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void Func(int value)
{
    if(value < 0)
    {
       //throw exception();
       throw "Number is less than 0";
    }
    if(value == 0)
    {
        throw "Number is equal 0";
    }
    if(value == 1)
    {
        throw 1;
    }
    cout << "variable = " << value << endl;
}
int main()
{
    try
    {
        Func(1);
    }
    catch(exception &ex)
    {
        cout << "Block 1, we catched " << ex.what() << endl;
    }
    catch(const char *ex)
    {
        cout << "Block 2, we catched " << ex << endl;
    }
    catch(...)
    {
        cout << "Something went wrong " << endl;
    }

    return 0;
}
