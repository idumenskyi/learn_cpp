#include <iostream>

using namespace std;

int main()
{
    int val;
    cin >> val;
    switch(val){
    case 1:
        cout << "You typed 1" << endl;
        break;
    case 2:
        cout << "You typed 2" << endl;
        break;

        default:
            cout << "I'm dont know this number" << endl;
            break;

    }

    return 0;
}
