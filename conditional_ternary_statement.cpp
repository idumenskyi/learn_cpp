#include <iostream>
using namespace std;
int main()
{
    int val;
    cout << "Type value of variable val" << endl;
    cin >> val;
    /*
    if(val < 5)
    {
        cout << "val less than 5" << endl;
    }
    else
    {
        if(val > 5)
        {
            cout << "val greater than 5" << endl;
        }
        else
        {
            cout << "val equal 5" << endl;
        }
    }
    */
    val < 5 ? cout << "val less than 5" << endl : val > 5 ? cout << "val greater than 5" << endl : cout << "val is equal 5" << endl;
    return 0;
}
