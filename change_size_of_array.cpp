#include <iostream>
using namespace std;
void FillArray(int* const arr, const int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}
void ShowArray(const int* const arr, const int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
//add item to the end of array
void push_back(int *&arr, int &size, int value) // argument *&arr is pointer to link
{
    int *newArray = new int [size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = value;
    //newArray[size++] = value;
    size++;

    delete [] arr;

    arr = newArray;
}
//delete item of array
void pop_back(int *&arr, int &size)
{
    size--;
    int *newArray = new int [size];
    for(int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    delete [] arr;
    arr = newArray;
}
int main()
{
    int size = 7;
    int *arr = new int [size];
    FillArray(arr, size);
    ShowArray(arr, size);
    push_back(arr, size, 121);
    ShowArray(arr, size);
    pop_back(arr, size);
    ShowArray(arr, size);
    delete [] arr;
}
