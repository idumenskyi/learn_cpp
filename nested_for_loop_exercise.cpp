#include <iostream>

using namespace std;

int main()
{

    int height, width;
    cout << "Type height of rectangle" << endl;
    cin >> height;

    cout << "Type width of rectangle" << endl;
    cin >> width;
    for(int i = 1; i < height; i++){

        for(int j = 1; j < width; j++){

        cout << "*";

        }
        cout << endl;

    }
    cout << endl;

    return 0;
}
