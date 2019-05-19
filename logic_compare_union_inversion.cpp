#include <iostream>

using namespace std;

int main()
{
    int num1 = 6, num2 = 8;
    cout << (2 > 9) << endl; // output 0
    cout << (2 < 9) << endl; // output 1
    cout << (2 >= 2) << endl; // output 1
    cout << (num1 == num2) << endl; // 0
    cout << !(num1 == num2) << endl; // inversiobn, 1
    cout << ((num1 == num2) && (8 > 7) && (2 == 2)) << endl;
    cout << ((num1 == num2) || (8 > 7) || (2 == 2)) << endl;
    return 0;
}
