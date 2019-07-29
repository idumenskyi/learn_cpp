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
    //overload +
    Point operator +(Point & other)
    {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        temp.z = this->z + other.z;
        return temp;

    }
    //increment overload
    //Prefix
    Point & operator ++()
    {

        this->x++;
        this->y += 1;
        this->z++;
        return *this;

    }
    //Postfix
    Point & operator ++(int value)
    {

        Point temp(*this); // store current statee of object
        this->x++;
        this->y++;
        this->z++;
        return temp;

    }

    //deccrement overload
    //Prefix
    Point & operator --()
    {

        this->x--;
        this->y -= 1;
        this->z--;
        return *this;

    }
    //Postfix
    Point & operator --(int value)
    {

        Point temp(*this); // store current statee of object
        this->x--;
        this->y--;
        this->z--;
        return temp;

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
    Point val(1, 1, 1);
    //++val;
    //val.Print();
    Point val1 = val++;
    return 0;
}
