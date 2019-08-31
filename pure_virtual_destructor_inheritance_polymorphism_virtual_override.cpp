#include <iostream>

using namespace std;
class A
{
public:
    A()
    {

    }
    //pure virtual destructor
    virtual ~A() = 0;

};

A::~A() {}; // fix compiler error - undefined reference to A::~A()


class B: public A
{
public:
    B()
    {

    }
    ~B() override
    {

    }
};
int main()
{
    //B b;
    B *bptr = new B;
    delete bptr;
    return 0;
}
