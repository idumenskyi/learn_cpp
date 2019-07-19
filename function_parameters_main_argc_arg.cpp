#include <iostream>

using namespace std;

int main(int argc, char* argv[]) // argc - arguments count, argv arguments values, char* - pointer to char
{
    for(int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    return 0;
}
