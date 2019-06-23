#include <iostream>
using namespace std;
void fillArray(int arr[], const int size){
    int a = sizeof(arr);
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 10;
    }
}
void printArray(int arr[], const int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}
int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    int a = sizeof(arr);
    fillArray(arr, SIZE);
    printArray(arr, SIZE);
    return 0;
}
