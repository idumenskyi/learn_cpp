#include <iostream>
using namespace std;
int main()
{
    int *pval = new int;
    *pval = 20;
    cout << *pval << endl;
    delete pval; // clearing memory
    /*
    pval = NULL; // same as: pval = 0; clearing address
    if (pval != NULL)
    {
        cout << pval << endl;
    }
    */
    pval = nullptr; // same as: pval = 0; clearing address
    if (pval != nullptr)
    {
        cout << pval << endl;
    }
    //cout << pval << endl; // 0
    delete pval; // clearing memory
    return 0;
}
