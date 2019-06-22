#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];
    bool alreadyHere;
    for(int i = 0; i < SIZE; i++)
    {
        alreadyHere = false;
        int newRandowmValue = rand() % 20;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandowmValue){
                alreadyHere = true;
                break;
            }
        }
        if (!alreadyHere){
            arr[i] = newRandowmValue;
            i++;
        }
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
