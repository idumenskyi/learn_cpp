#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
    int z;
public:
    //Constructor by define
    Point()
    {
        x = 0;
        y = 0;
        z = 0;
        cout << this << "\tconstructor" << endl;
    }
    // Constructor with parameters
    Point(int valueX, int valueY, int valueZ)
    {
        x = valueX;
        y = valueY;
        z = valueZ;
        cout << this << "\tconstructor" << endl;
    }
    //overload ==
    bool operator == (const Point & other)
    {
        return this->x == other.x && this->y == other.y;
    }
    //overload !=
    bool operator != (const Point & other)
    {
        return !(this->x == other.x && this->y == other.y);
    }

    void SetX(int valueX)
    {
        x = valueX;
    }
    void SetY(int y)
    {
        this->y = y;
    }
    void SetZ(int valueZ)
    {
        z = valueZ;
    }

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
    void Print()
    {
        cout << "X = " << x << "\tY = " << y << "\tZ = " << z << endl;
    }
};
int main()
{
    Point val(8, 7, 2);
    Point val1(6, 5, 5);
    //bool result = val == val1;
    bool result = val != val1;
    /*
    if(val == val1)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    */
    return 0;
}
