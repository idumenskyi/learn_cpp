#include <iostream>

using namespace std;

int somefunc(int a){
    return ++a;
}

int main()
{
    int value = 1;
    value = somefunc(value);
    cout << value << endl;
    return 0;
}
