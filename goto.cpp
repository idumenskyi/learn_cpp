#include <iostream>

using namespace std;

int main()
{
    cout << "One" << endl;

    goto link;

    cout << "Two" << endl;

    cout << "Three" << endl;

    link:

    cout << "Four" << endl;

    cout << "Five" << endl;
    return 0;
}
