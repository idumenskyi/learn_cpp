#include <iostream>

using namespace std;
namespace one
{
    void SameFunc()
    {
        cout << "SameFunc one" << endl;
    }
    int valone;
    class OnePoint{};
}
namespace two
{
    void SameFunc()
    {
        cout << "SameFunc two" << endl;
    }
    int valtwo;
    class twoPoint{};
}
namespace three
{
 namespace two
 {
    void SameFunc()
    {
        cout << "SameFunc three" << endl;
    }
 }
}

int main()
{
    one::SameFunc();
    two::SameFunc();
    three::two::SameFunc();
    return 0;
}
