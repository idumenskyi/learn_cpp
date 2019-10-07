#include <iostream>
using namespace std;
template<typename T>
class SmartPointer
{
public:
    SmartPointer(T *ptr)
    {
        this->ptr = ptr;
        cout << "Constructor" << endl;
    }
    ~SmartPointer()
    {
        delete ptr;
        cout << "Destructor" << endl;
    }
    T& operator*()
    {
        return *ptr;
    }
private:
    T *ptr;
};
int main()
{
    SmartPointer<int> pointer = new int(8);
    //*pointer = 23456;
    cout << *pointer << endl;
}
