#include <iostream>

using namespace std;

int main()
{
    int symbolCount;
    char symbol;
    int lineType;
    int index = 0;

    cout << "Enter amount of symbols in lines" << endl;
    cin >> symbolCount;
    cout << "Enter symbol" << endl;
    cin >> symbol;
    cout << "Choose type of line" << endl
        << "1 - Vertical line" << endl
        << "2 - Horizontal line" << endl;

    cin >> lineType;

    if (lineType != 1 && lineType != 2)
    {
        cout << "Incorrect type of line" << endl;
        return;
    }

    while (index < symbolCount)
    {
        if (lineType == 1)
        {
            cout << symbol << endl;

        }
        if (lineType == 2)
        {
            cout << symbol;

        }

        index++;
    }


    cout << endl << endl;
    return 0;
}
