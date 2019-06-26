#include <iostream>
using namespace std;
template <class T> // T is naming of type
void sum(T num)
{
    cout << num << endl;
}
/*
template <typename T> // T is naming of type
T sum(T num1, T num2)
{
    return num1 + num2;
}
*/
/*
template <typename T1, typename T2> // T is naming of type
void sum(T1 num1, T2 num2)
{
    cout << num1 << endl;
    cout << num2 << endl;
}
*/
/*
template <typename T1, typename T2> // T1, T2 is naming of type
T1 sum(T1 num1, T2 num2) //T2
{
    return num1 + num2;
}
*/
int main()
{
    //cout << sum(9, 34) << endl;
    //cout << sum(9.5, 34.2) << endl;
    //cout << sum(9, 34.3) << endl; // output 43 without fractional part
    //sum(7, 6.5); // output 7 and on next line 6.5
    //sum(7, "value"); // output 7 and on next line string "value"
    sum(2);
    return 0;
}
