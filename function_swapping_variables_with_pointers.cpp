#include <iostream>
using namespace std;
void Swap(int *val, int *val1)
{
    int temp = *val;
    *val = *val1;
    *val1 = temp;
}
int main()
{
    int a = 8;
    int b = 4;
    cout << "a\t" << a << endl; //8
    cout << "b\t" << b << endl; //4
    cout << "Swap" << endl;
    Swap(&a, &b);
    cout << "a\t" << a << endl; // 4
    cout << "b\t" << b << endl; // 8
}
