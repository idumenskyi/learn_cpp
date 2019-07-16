#include <iostream>
#include <string>
using namespace std;
/*
int func1(int val)
{
    return val - 2;
}
int func2(int val)
{
    return val * 3;
}
*/
string DataFromWebServer()
{
    return "Data From Web Server";
}
string DataFromDB()
{
    return "Data From DB";
}
void showInfo(string (*func)())
{
    cout << func() << endl;
}

int main()
{
    /*
    int(*funcPointer)(int val);
    funcPointer = func2;
    cout << funcPointer(7) << endl;
    */
    showInfo(DataFromDB);
    return 0;
}
