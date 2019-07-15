#include <iostream>
using namespace std;
int main()
{
    double val = 45.5;
    int val1 = 49.897;
    int val2 = val;
    cout << "val = " << (int)val << endl; // explicit type conversion
    cout << "val1 = " << val1 << endl; // implicit type conversion
    cout << "val2 = " << val2 << endl; // implicit type conversion
    cout << "val1 / val = " << int(val1 / val) << endl;
    return 0;
}
