#include <iostream>
using namespace std;
void func(int *pval)
{
    //(*pval)++; //(denaming) and increment
    (*pval) = 7;
}
int main()
{
    int val = 0;
    cout << val << endl; //0
    func(&val);
    cout << val << endl;// 7
    return 0;
}
