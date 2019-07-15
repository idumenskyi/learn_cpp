#include <iostream>
#include <cstring>
using namespace std;
void ShowSizeOfString(char *str)
{
    cout << strlen(str) << endl;
}
int main()
{
    /*
    char str[] = "Hello, i'm string!";
    char *string = str;
    cout << string << endl; //output: Hello, i'm string!
    */
    /*
    //Array of strings
    char *strArr[] = {"Apple", "Orange", "Pineapple"};
    for(int i = 0; i < 3; i++)
    {
        cout << strArr[i] << endl;
    }
    */
    char *str = "root";
    ShowSizeOfString(str);
    return 0;
}
