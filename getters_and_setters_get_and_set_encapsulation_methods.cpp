#include <iostream>
using namespace std;
class Person
{
    int age;
    int weight;
    string name;
    void Print()
    {
        cout << "Name " << name << "\n Weight" << weight << "\nAge" << age << endl << endl;
    }
};
class Point
{
private:
    int x;
    int y;
    int z;
public:
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    int GetZ()
    {
        return z;
    }
    void SetX(int valueX)
    {
        x = valueX;
    }
    void SetY(int valueY)
    {
        y = valueY *3;
    }
    void SetZ(int valueZ)
    {
        z = valueZ;
    }
    void Print()
    {
        cout << "X = " << x << "\nY = " << y << "\nZ = " << z << endl;
    }
};
int main()
{
    Point val;
    val.SetX(100);
    val.SetY(200);
    val.SetZ(300);
    val.Print();
    int result = val.GetX();
    cout << result << endl;
    return 0;
}
