#include <iostream>
#include <string>
using namespace std;
class Apple;
class Apple
{
public:
    static int Count;
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        Count++;
        id = Count;
    }
    int GetId()
    {
        return id;
    }
private:
    int id;
    int weight;
    string color;
};
int Apple::Count = 0;
int main()
{
    Apple apple(120, "Green");
    Apple apple1(110, "Red");
    Apple apple2(140, "Yellow");
    cout << apple.GetId() << endl;
    cout << apple1.GetId() << endl;
    cout << apple2.GetId() << endl;
}
