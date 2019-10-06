#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Printer
{
public:
    void Print(T value)
    {
        cout << value << endl;
    }

};
template<>
class Printer<string>
{
public:
    void Print(string value)
    {
        cout << "====" << value << "====" << endl;
    }
};
int main()
{
    Printer<int> p;
    p.Print(349);
    Printer<string> s;
    s.Print("some string");
    return 0;
}
