#include <iostream>
using namespace std;
/*Recursion factorial
N! = N * (N-1)!
*/
int fact(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return n * fact(n -1);
}
int main()
{
    cout << fact(5) << endl;
    return 0;
}
