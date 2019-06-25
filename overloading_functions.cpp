#include <iostream>
using namespace std;
int sum(int num1, int num2, int num3)
{
    num2++;
    return num1 + num2 + num3;

}
int sum(int num1, int num2)
{
    return num1 + num2;
}
double sum(double num1, double num2)
{
    return num1 + num2;
}
int main()
{
    cout << sum(8, 7) << endl;
    cout << sum(8.3, 7.3) << endl;
    cout << sum(8, 7, 3) << endl;
    return 0;
}
