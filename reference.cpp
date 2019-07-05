#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *pa = &a;
    int &aRef = *pa;
    int *ppa = &aRef;
    //cout << "*pa\t" << pa << endl; // address
    //pa = pa + 2; // change address
    //cout << "*pa\t" << pa << endl; // new value of address
    cout << "a\t" << a << endl;
    cout << "*aRef\t" << aRef << endl; // 5
    aRef = 77;
    cout << "a\t" << a << endl;
    *ppa = 44;
    cout << "a\t" << a << endl;
    //aRef = aRef + 2; // change data not address
    //cout << "*aRef\t" << aRef << endl; // 7
    return 0;
}
