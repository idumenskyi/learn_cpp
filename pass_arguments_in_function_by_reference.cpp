#include <iostream>
using namespace std;
void func(int val)
{
    val = 2;
}
void func1(int &val)
{
    val = 3;
}
void func2(int *val)
{
    *val = 4;
}
int main()
{
    int value = 8;
    cout << "value = " << value << endl << endl;
    func(value);
    cout << "func = " << value << endl << endl;
    func1(value);
    cout << "func1 = " << value << endl << endl;
    func2(&value);
    cout << "func2 = " << value << endl << endl;
    return 0;
}
