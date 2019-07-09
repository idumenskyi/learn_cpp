#include <iostream>
using namespace std;
template<typename T>
void Swap(T &val, T &val1)
{
    T temp = val;
    val = val1;
    val1 = temp;
}
int main()
{
    //double a = 8.04;
    //double b = 4.06;
    int a = 8;
    int b = 4;
    cout << "a\t" << a << endl; //8
    cout << "b\t" << b << endl; //4
    cout << "Swap" << endl;
    Swap(a, b);
    cout << "a\t" << a << endl; // 4
    cout << "b\t" << b << endl; // 8
}
