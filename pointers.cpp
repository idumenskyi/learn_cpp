#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *px = &a;
    int *px1 = &a;
    cout << "px\t" << px << endl; // address of variable
    cout << "px1\t" << px1 << endl;
    cout << "*px\t" << *px << endl; // 5
    *px1 = 1;
    cout << "a\t" << a << endl; // 1
    cout << "*px\t" << *px << endl; // 1
    return 0;
}
