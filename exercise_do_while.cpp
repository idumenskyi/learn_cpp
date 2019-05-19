#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    int rangeBegin, rangeEnd;



    cout << "Enter begin of range: " << endl;
    cin >> rangeBegin;

    cout << "Enter end of range: " << endl;
    cin >> rangeEnd;

    do{
        if(rangeBegin % 2 !=  0){
            sum += rangeBegin;
        }
        rangeBegin++;

    }while(rangeBegin < rangeEnd);

    cout << "sum all odd numbers in range = " << sum << endl;

    return 0;
}
