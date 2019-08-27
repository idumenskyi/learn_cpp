#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    A(string msg)
    {
        this -> msg = msg;
    }
    A(string msg, int a)
    {
        this -> msg = msg;
    }
    void PrintMsg()
    {
        cout << msg << endl;
    }
private:
    string msg;

};
class B : public A
{
public:
    B():A("Some string")
    {

    }

};

int main()
{
    B b;
    b.PrintMsg();
    return 0;
}
