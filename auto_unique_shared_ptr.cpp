#include <iostream>
#include <string>
#include <memory>
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
    //auto_ptr<int> ap1(new int(8));
    //auto_ptr<int> ap2(ap1);
    //unique_ptr<int> up1(new int(8));
    //unique_ptr<int> up2;
    //up2 = move(up1); // or up2.swap(up1);
    //up2.swap(up1);
    //int *up = up1.get();
    //int *up = new int(8);
    //unique_ptr<int> up1(up);
    //up1.reset();
    //up1.release();
    shared_ptr<int> shp1(new int(8));
    shared_ptr<int> shp2(shp1);

}
