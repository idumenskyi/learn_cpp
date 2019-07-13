#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    int cols = 6;
    int **arr = new int* [rows];// this variable stores a pointer to a pointer, this line create array of pointer
    cout << "type rows" << endl;
    cin >> rows;
    cout << "type cols" << endl;
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 25;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    /* delete data of array */
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i]; //free pointers
    }
    delete[] arr; // free memory
    return 0;
}
