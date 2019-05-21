#include <iostream>

using namespace std;

int main()
{
    /*
    cout << "Begin of Loop" << endl;
    for (int i = 0; ; i++)  // condition between semicolon by default is true
    {
        cout << "Variable i = " << i << endl;
        if (i == 7){
            break;
        }
    }

    cout << "End of Loop" << endl;*/
    int i = 0;
    cout << "Begin of Loop" << endl;
    while(true){
        cout << "Variable i = " << i << endl;
        i++;
        if (i == 8){
            break;
        }
    }
    cout << "End of Loop" << endl;

    return 0;
}
