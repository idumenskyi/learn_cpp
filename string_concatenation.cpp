#include <iostream>
//#include <cstring>
#include <string>
using namespace std;
int main()
{
    //Concatenation in C++ style
    string str1 = "Hello";
    string str2 = "World";
    string result;
    result = str1 + " " + str2;
    cout << result << endl;
    /*
    //concatenation in C style
    char result[255]{};
    char str1[255] = "Hello";
    char str2[255] = "World";
    cout << str1 << endl;
    strcat(result, str1); // here result is destination and str1 is a source
    strcat(result, str2); // here result is destination and str2 is a source
    cout << result << endl;
    */
    return 0;
}
