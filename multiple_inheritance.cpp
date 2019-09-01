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
class Airplane
{
public:
    string airplane = "field of Airplane class";
    void Fly()
    {
        cout << "I`m flying" << endl;
    }
};
class FlyingCar: public Car, public Airplane
{

};
int main()
{
    FlyingCar fc;
    Car *ptrC = &fc;
    Airplane *ptrA = &fc;
    return 0;
}
