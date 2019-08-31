#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string car = "field of Car class";
    void Drive()
    {
        cout << "I`m driving" << endl;
    }
};
class Airplain
{
public:
    string airplain = "field of Airplain class";
    void Fly()
    {
        cout << "I`m flying" << endl;
    }
};
class FlyingCar: public Car, public Airplain
{

};
int main()
{
    FlyingCar fc;
    Car *ptrC = &fc;
    Airplain *ptrA = &fc;
    return 0;
}
