#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ua");
    for (int i = 0; i <= 255; i++)
    {
        cout << "code = " << i << " " << "char = " <<  (char)i << endl;
    }
    return 0;
}
