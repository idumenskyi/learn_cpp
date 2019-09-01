#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    Car()
    {
        cout << "called constructor Car" << endl;
    }
    void Drive()
    {
        cout << "I`m driving" << endl;
    }
};
class Airplane
{
public:
    Airplane()
    {
        cout << "called constructor Airplane" << endl;
    }
    void Fly()
    {
        cout << "I`m flying" << endl;
    }
};
class FlyingCar: public Airplane, public Car
{
public:
    FlyingCar()
    {
        cout << "called constructor FlyingCar" << endl;
    }
};
int main()
{
    FlyingCar fc;
    return 0;
}
