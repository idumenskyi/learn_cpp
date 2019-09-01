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
    ~Car()
    {
        cout << "called destructor Car" << endl;
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
    ~Airplane()
    {
        cout << "called destructor Airplane" << endl;
    }
    void Fly()
    {
        cout << "I`m flying" << endl;
    }
};
class FlyingCar: public Car, public Airplane
{
public:
    FlyingCar()
    {
        cout << "called constructor FlyingCar" << endl;
    }
    ~FlyingCar()
    {
        cout << "called destructor FlyingCar" << endl;
    }
};
int main()
{
    FlyingCar fc;
    cout << endl << endl;
    return 0;
}
