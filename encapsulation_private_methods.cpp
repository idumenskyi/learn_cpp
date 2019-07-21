#include <iostream>
using namespace std;
class CoffeeGrinder
{
private:
    bool CheckVoltage()
    {
        return true;
    }
public:
    void start()
    {
        //bool voltageIsNormal = CheckVoltage();
        //if(voltageIsNormal)
        if(CheckVoltage())
        {
            cout << "Turn on" << endl;
        }
        else
        {
            cout << "Beep\a\a\a\a\a\a" << endl;
        }
    }
};
int main()
{
    CoffeeGrinder val;
    val.start();
    return 0;
}
