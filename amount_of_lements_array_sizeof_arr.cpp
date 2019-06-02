#include <iostream>

using namespace std;

int main()
{
    int arr[]{87, 56, 25, 15, 18};
    //int a = sizeof(arr);
    //int b = sizeof(int);
    //cout << sizeof(arr)/sizeof(int) << endl;
    //cout << a / b << endl;
    //for(int i = 0; i < sizeof(arr)/sizeof(int); i ++){
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i ++){
        cout << arr[i] << endl;
    }
    return 0;
}
