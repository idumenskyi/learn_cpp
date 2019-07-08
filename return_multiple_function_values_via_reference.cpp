#include <iostream>
using namespace std;
void func(int &val, int &val1, int &val2)
{
    val = 20;
    val1 *= 4;
    val2 -= 50;
}
int main()
{
    int val = 0, val1 = 8, val2 = 48;
    cout << "val =\t" << val << endl;
    cout << "val1 =\t" << val1 << endl;
    cout << "val2 =\t" << val2 << endl;
    cout << "foo \t" << endl;
    func(val, val1, val2);
    cout << "val =\t" << val << endl;
    cout << "val1 =\t" << val1 << endl;
    cout << "val2 =\t" << val2 << endl;
    return 0;
}
