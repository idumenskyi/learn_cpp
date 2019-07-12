#include <iostream>
using namespace std;
int main()
{
    int *pval = new int;
    *pval = 20;
    cout << *pval << endl;
    delete pval; // clearing memory
    return 0;
}
