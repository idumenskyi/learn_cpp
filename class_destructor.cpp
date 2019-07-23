#include <iostream>
using namespace std;
class  SomeClass{
private:
    int* data;
public:
    SomeClass(int size)
    {
        data = new int[size];
        for(int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout << "object " << data << " call to class constructor" << endl;
    }
    ~SomeClass()
    {   
        delete[] data; // free memory
        cout << "object " << data << " call to class destructor" << endl;
    }
};
void func()
{
    cout << "func begin of execute" << endl;
    SomeClass val(1);
    cout << "func end of execute" << endl;
}
int main()
{
    func();
    //SomeClass val1(2);
    return 0;
}
