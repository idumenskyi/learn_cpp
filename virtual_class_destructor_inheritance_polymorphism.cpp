#include <iostream>

using namespace std;
class A
{
public:
    A()
    {
        cout << "dynamic memory allocated, class A object " << endl;
    }
    virtual ~A()
    {
        cout << "dynamic memory freed, class A object" << endl;
    }
};
class B: public A
{
public:
    B()
    {
        cout << "dynamic memory allocated, class B object " << endl;
    }
    ~B() override
    {
        cout << "dynamic memory freed, class B object" << endl;
    }
};
int main()
{
    //B b;
    B *bptr = new B;
    delete bptr;
    return 0;
}
