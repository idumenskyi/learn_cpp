#include <iostream>

using namespace std;

int main()
{

    int num = 5;
    cout << num << endl;
    cout << num++ << endl; // postfix 5
    cout << ++num << endl; // prefix 7

    cout << num-- << endl; // postfix 7
    cout << --num << endl; // prefix 5
    num = ++num * num; // 1. 5 + 1 then display 6 and 6 * 6 = 36
    cout << num << endl;

    return 0;
}
