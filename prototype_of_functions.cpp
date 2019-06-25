#include <iostream>
using namespace std;
void somefunc(int num1, int num2); //functions prototype with paramters
int main()
{
    somefunc(9, 8);
    return 0;
}
void somefunc(int num1, int num2)
{
    cout << "Hi, i'm somefunc!" << endl;
}
