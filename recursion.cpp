#include <iostream>
using namespace std;
int recursion(int val)
{
    if (val < 1) //exit from recursion
        return 0;
    val--; //exit from recursion
    cout << val << endl;
    return recursion(val);
}
int main()
{
    recursion(81);
    return 0;
}
