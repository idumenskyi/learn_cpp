#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++){

    if (i == 5){
        continue;
    }

    cout << "Variable i = " << i << endl;
    }

    return 0;
}
