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
        cout << arr << "\t";
    }
    cout << endl;
}
int main()
{
    ShowArray();
    return 0;
}
