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

    cout << "loop 3" << endl;
    for (int i = 0, j = 10; i < 27 && j != 8; i++, j--)
    {
        cout << "Variable i = " << i << endl;
        cout << "Variable j = " << j << endl;
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
