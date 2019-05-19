#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please type nymber: ";
    cin >> num;
    if(num % 2 == 0){
        cout << "Your typed number is even" << endl;
    }
    else{
        cout << "Your typed number is odd" << endl;

    }

    return 0;
}
