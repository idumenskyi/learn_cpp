#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Class A constructor called" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Class B constructor called" << endl;
    }
};
class C : public B
{
public:
    C()
    {
        cout << "Class C constructor called" << endl;
    }
};

int main()
{
    C c;
    return 0;
}
