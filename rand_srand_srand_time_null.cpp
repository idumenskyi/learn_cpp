#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    //int a = rand() % 5 + 1; //generating number from 0 to 6
    //cout << a << endl;
    //a = rand() % 5 + 1;
    //cout << a << endl;
    int const SIZE = 10;
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 121; //generating number from 0 to 10
    }

    for(int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
