#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void Func(int value)
{
    if(value < 0)
    {
       throw exception();
    }
    cout << "variable = " << value << endl;
}
int main()
{
    try
    {
        Func(-123);
    }
    catch(exception &ex)
    {
        cout << "We catched " << ex.what() << endl;
    }

    return 0;
}
