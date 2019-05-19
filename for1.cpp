#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    cout << "loop 1" << endl;
    for ( ; i < 14; i++)
    {
        cout << "Variable i = " << i << endl;
    }

    cout << "loop 2" << endl;
    for ( ; i < 27; i++)
    {
        cout << "Variable i = " << i << endl;
    }


    /*
    for (int i = 0; ; i++)
    {
        cout << "Variable i = " << i << endl;
    }*/

    /*
    for (int i = 0; i < 14; )
    {
        cout << "Variable i = " << i << endl;
        i++;
    }*/

    return 0;
}
