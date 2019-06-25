#include <iostream>
using namespace std;
void somefunc(int num1, int num2);
int main()
{
    somefunc(9, 8);
    return 0;
}
void somefunc(int num1, int num2)
{
    cout << "Hi, i'm somefunc!" << endl;
}
