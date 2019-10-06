//This code not working
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    int x;
    int y;
    int z;
};
template<class T1>
class TypeSize
{
public:
    TypeSize(T1 value)
    {
        this -> value = value;

    }
    void DataTypeSize()
    {
        cout << "value = " << sizeof(value) << endl;

    }

protected:
    T1 value;

};
template<class T1>
class TypeInfo: public TypeSize<T1>
{
public:
    TypeInfo(T1 value):TypeSize<T1>(value) // call of base class consructor
    {

    }
    void ShowTypeName()
    {
        cout << "Type name: " << typeid(value).name() << endl;
    }
};
int main()
{

    Point a;
    TypeInfo<Point> c(a);
    c.ShowTypeName();
    c.DataTypeSize();
    return 0;
}
