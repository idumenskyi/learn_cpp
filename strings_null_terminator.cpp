#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char letter = 'a'; // \0 - null terminator
    cout << letter << endl;
    //char string [] = "Hi, I'm string";
    char string [] = {'s','t','r','i','n','g','\0'};
    cout << strlen(string) << endl;
    return 0;
}
