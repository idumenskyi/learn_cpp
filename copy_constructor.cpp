#include <iostream>
using namespace std;
class  SomeClass{
public:
    int *data;
    SomeClass(int size)
    {
        this -> Size = size; // "this" is a pointer on current object of class
        this -> data = new int[size];
        for (int i = 0; i < size; i++)
        {
          data[i] = i;
        }
        cout << "object call to class constructor " << this << endl;
    }
    //copy constructor
    SomeClass(const SomeClass &other)
    {
        this->Size = other.Size;
        this->data = new int[other.Size];
        for(int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        cout << "copy constructor call " << this << endl;
    }
    ~SomeClass()
    {
        cout << "object call to class destructor " << this << endl;
        delete[] data;
    }
private:
    int Size;
};
void func(SomeClass value)
{
    cout << "call to function func" << endl;
}
SomeClass func1()
{
    cout << "call to function func_2" << endl;
    SomeClass temp(2);
    return temp;
}
int main()
{
    //func1();
    SomeClass val(10);
    SomeClass val1(val); //copy object val in val1
    //func(val);
    return 0;
}
