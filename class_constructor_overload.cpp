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
    }

    Point(int valueX, bool boolean)
    {
        x = valueX;
        if(boolean)
        {
            y = 1;
            z = 5;
        }
        else
        {
            y = -1;
            z = -5;
        }

    }
    // Constructor with parameters
    Point(int valueX, int valueY, int valueZ)
    {
        x = valueX;
        y = valueY;
        z = valueZ;
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
    Point val;
    val.Print();
    Point val1(3, 5, 9);
    val1.Print();
    Point val2(64, true);
    val2.Print();
    return 0;
}
