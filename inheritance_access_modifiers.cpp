#include <iostream>
#include <string>
using namespace std;
class A
{
public: //full access
    string MsgOne = "Message one";
private://without access
    string MsgTwo = "Message two";
protected://access for inherited classes
    string MsgThree = "Message three";
};
class B : public A
{
public:
    void PrintMsg()
    {
        cout << MsgThree << endl;
    }
};
int main()
{
    B b; //class instance           
    b.PrintMsg();
    return 0;
}
