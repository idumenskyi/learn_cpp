#include <iostream>
using namespace std;
class Point
{
public: // always
    int x;
    void Print()
    {
        cout << "x " << x << "\ny " << y << "\nz " << z << endl;
        PrintZ();
    }
protected:
    int y;
private:
    int z;
    void PrintZ()
    {
        cout << "PrintZ()" << endl;
        cout << z << endl;
    }
};
int main()
{

    Point val;
    val.Print();
    return 0;
}
