#include <iostream>
using namespace std;
void func(int *pval, int *pval1, int *pval2)
{
    //(*pval)++; //(denaming) and increment
    (*pval) = 70;
    (*pval1)++; //(denaming) and increment
    (*pval2) = -10;
}
int main()
{
    int val = 0, val1 = 0, val2 = 0;
    cout << "val = " << val << endl; //0
    cout << "val1 = " << val1 << endl; //0
    cout << "val2 = " << val2 << endl; //0
    cout << "func" << endl; //0
    func(&val, &val1, &val2);
    cout << "val = " << val << endl; //70
    cout << "val1 = " << val1 << endl; //1
    cout << "val2 = " << val2 << endl; //-10
    return 0;
}
