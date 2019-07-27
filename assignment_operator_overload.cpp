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

    // Assignment operator overload
    SomeClass & operator = (const SomeClass &other)
    {

        this->Size = other.Size;
        cout << "operator call " << this << endl;
        if(this->data!=nullptr)
        {
            delete[] this->data;
        }

        this->data = new int[other.Size];
        for(int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }

        return *this; // *this - operation dereference

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
    SomeClass val(10);
    //SomeClass val1(val);
    SomeClass val1(3);
    SomeClass val2(4);
    val2 = val = val1;
    //val.operator = (val1); // equivalent val = val1 - is overloading assignment operator

    return 0;
}
