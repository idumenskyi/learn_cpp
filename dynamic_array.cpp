#include <iostream>
using namespace std;
int main()
{
    int size = 0;
    cout << "type size of array: " << endl;
    cin >> size;
    int *arr = new int [size];
    delete [] arr;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t"; // same as *(arr + i)
        cout << arr + i << endl; // output with arithmetic of pointer
    }
    return 0;
}
