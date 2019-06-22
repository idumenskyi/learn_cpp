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
    int minValue = arr[0];
    for(int i = 1; i < SIZE; i++){
        if (arr[i] < minValue){
            minValue = arr[i];
        }
    }
    cout << "Most less value in array " << minValue << endl;
    return 0;
}
