#include <iostream>
using namespace std;
void dash(int s, int d = 5, double v = 0.5)
{
    for(int i = 0; i < d; i++)
    {
        cout << "#" << endl;
    }
}
int main()
{
    dash(4);
    return 0;
}
