#include <iostream>
#include <string>
using namespace std;
//abstracct class
class IBicycle
{
public:
    //pure virtual methods
    void virtual TwistTheWheel() = 0;
    void virtual Ride() = 0;
};
class SimpleBicycle: public IBicycle
{
public:
    void TwistTheWheel() override
    {
        cout << "Method TwistTheWheel() SimpleBicycle" << endl;
    }
    void Ride() override
    {
        cout << "Ride() SimpleBicycle" << endl;
    }
};
class SportBicycle: public IBicycle
{
public:
    void TwistTheWheel() override
    {
        cout << "Method TwistTheWheel() SportBicycle" << endl;
    }
    void Ride() override
    {
        cout << "Ride() SportBicycle" << endl;
    }
};
class Human
{
public:
    void RideOn(IBicycle & bicycle)
    {
        cout << "Spin the wheel" << endl;
        bicycle.TwistTheWheel();
        cout << "Go" << endl;
        bicycle.Ride();
    }
};
int main()
{
    SimpleBicycle sb;
    SportBicycle sportb;
    Human h;
    h.RideOn(sportb);
    return 0;
}
