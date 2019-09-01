#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string car = "field of Car class";
    void Use()
    {
        cout << "I`m driving" << endl;
    }
};
class Airplane
{
public:
    string airplane = "field of Airplane class";
    void Use()
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
    ((Car)fc).Use();//casting to Car
    ((Airplane)fc).Use();//casting to Airplane
    return 0;
}
