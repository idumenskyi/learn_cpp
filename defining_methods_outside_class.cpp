#include <iostream>
using namespace std;
class SomeClass
{
public:
    SomeClass();
    ~SomeClass();
    void PrintMessage();


private:

};
SomeClass::SomeClass()
{

}
SomeClass::~SomeClass()
{

}
void SomeClass::PrintMessage()
{
        cout << "Hello" << endl;
}
int main()
{
    SomeClass val;
    val.PrintMessage();
    return 0;
}
