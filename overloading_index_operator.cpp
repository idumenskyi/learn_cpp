#include <iostream>
using namespace std;
class OverloadIndexClass
{
public:
    int & operator[](int index)
    {
        return arr[index];
    }
private:
    int arr[4]{7, 9, 2, 3};
};
int main()
{
    OverloadIndexClass val;
    cout << val[1] << endl;
    val[1] = 20; // here here change value of array its possible because we use reference - int & operator[](int index)
    cout << val[1] << endl;
    return 0;
}
