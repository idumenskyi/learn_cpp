#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int arr[] = {9, 4, 35, 98, 3};
    //cout << *arr << endl; // 9
    //cout << *(arr + 1) << endl; // 4
    //cout << *(arr + 2) << endl; // 35
    for(int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl; // 9, 4, 35, 98, 3
        cout << (arr+i) << endl; // addresses
    }
    int *pArr = arr;
    cout << "=======================" << endl;
    cout << "arr\t" << arr << endl;
    cout << "pArr\t" << pArr << endl;
    cout << "=======================" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << pArr[i] << endl; // 9, 4, 35, 98, 3
        cout << *(pArr+1) << endl; // 9, 4, 35, 98, 3
    }
    return 0;
}
