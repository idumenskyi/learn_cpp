#include <iostream>

using namespace std;

int main()
{
    int num1, num2, choosen;
    cout << "Please Enter two number: " << endl;
    cin >> num1 >> num2;
    cout << "Choose Math operation: " << endl <<
            "1. Addition" << endl <<
            "2. Substraction" << endl <<
            "3. Multiplication" << endl <<
            "4. Division" << endl;
    cin >> choosen;
    switch(choosen){
    case 1:
        cout << "Results of addition: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Results of substraction: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Results of multiplication: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Results of division: " << (float)num1 / num2 << endl;
        break;
    default:
        cout << "Error! The option is not exsist!" << endl;
        break;

    }

    return 0;
}
