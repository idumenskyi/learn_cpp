#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "please type number: " << endl;
    cin >> num;
    //bool isRain = true;
    bool isRain = false;
    if(isRain){
        cout << "it rains, we need umbrella" << endl;
    }
    else{
        cout << "it not rains, we not need umbrella" << endl;
    }

    if(num > 5){
        cout << "your number is greater than 5:  " << num << endl;
    }
    else if(num < 5){
        cout << "your number is less than 5: " << num << endl;
    }
    else if(num == 5){
        cout << "your number is equal 5: " << num << endl;
    }


    return 0;
}
