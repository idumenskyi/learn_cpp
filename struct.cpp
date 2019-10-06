#include <iostream>
#include <string>

using namespace std;
class SomeClass
{
    int val = 11;
public:
    void print()
    {
        cout << val << endl;
    }
};
struct SomeStruct
{
    SomeStruct()
    {

    }
    SomeStruct(int val)
    {

    }
    ~SomeStruct()
    {

    }
    int val = 44;
    void print()
    {
        cout << val << endl;
    }
};
int main()
{
    SomeClass sc;
    SomeStruct st;
    st.print();

    return 0;
}
