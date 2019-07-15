#include <iostream>
#include <cstring>
using namespace std;
int strLength(char *str)
{
    int counter = 0;
    while(str[counter]!='\0')
    {
        counter++;
    }
    return counter;
}
int main()
{
    //char *str = "root";
    char str[] = {'r','o','o','t','\0'};
    cout << strLength(str) << endl;
    return 0;
}
