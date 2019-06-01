#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i < 5; i++){

        cout << "Run 1 loop for iteration № " << i << endl;

        for(int j = 1; j < 5; j++){

        cout << "\tRun 2 loop for iteration № " << j << endl;

        }

    }

    return 0;
}
