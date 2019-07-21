#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
    int z;
public:
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
        cout << "X = " << x << "\nY = " << y << "\nZ = " << z << endl;
    }
};
int main()
{
    Point val(7, 8, 55);
    val.Print();
    Point val1(9, 4, 7);
    val1.Print();
    return 0;
}
