#include <iostream>
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
template<typename T1, typename T2> // same as template<class T1, class T2>
class SomeClass
{
public:
    SomeClass(T1 value, T2 valueone)
    {
        this -> value = value;
        this -> valueone = valueone;
    }
    void DataTypeSize()
    {
        cout << "value = " << sizeof(value) << endl;
        cout << "valueone = " << sizeof(valueone) << endl;
    }
    T1 Func()
    {
        return value;
    }
private:
    T1 value;
    T2 valueone;
};
int main()
{
    int a = 7;
    //SomeClass<int> sc(a);
    //sc.DataTypeSize();
    Point p;
    SomeClass<int, Point> sc(a, p);
    sc.DataTypeSize();
    return 0;
}
