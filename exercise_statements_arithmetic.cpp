#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum, mul;
    double avg;
    cout << "Please type three numbers: " << "\n";
    cin >> a >> b >> c;
    cout << "You typed these numbers: " << a << ", " << b << ", " << c << "\n";
    //sum = a + b + c;
    //mul = a * b * c;
    //avg = (double)(a + b + c) / 3;
    cout << "sum = " << a + b + c << "; " << " mul = " <<  a * b * c << "; " << " avg = " << (double)(a + b + c) / 3 << "; " << "\n";
    return 0;
}
