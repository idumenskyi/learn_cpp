#include <iostream>
#include <string>
using namespace std;
class Msg
{
public:
    Msg(string msg)
    {
        this->msg = msg;
    }
    virtual string GetMsg()
    {
        return msg;
    }
private:
    string msg;
};

class BraketsMsg:public Msg
{
public:
    BraketsMsg(string msg):Msg(msg)
    {

    }
    string GetMsg() override
    {
        return "[" + ::Msg::GetMsg() + "]";
    }

};
class Printer
{
public:
    void  print(Msg *msg)
    {
        cout << msg->GetMsg() << endl;
    }
};
int main()
{
    BraketsMsg m("Hi!");
    Printer p;
    p.print(&m);
    return 0;
}
