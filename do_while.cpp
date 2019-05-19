#include <iostream>

using namespace std;

int main()
{
    int val = 15;
    
    do
    {
        cout << "Variable val = " << val << endl;
        val++;
        //break;
    }while (val < 15); // executed one time

    return 0;
}
