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
    }
private:
    int weight;
    string color;
};
int Apple::Count = 0;
int main()
{
    Apple apple(120, "Green");
    Apple apple1(110, "Red");
    Apple apple2(140, "Yellow");
    //cout << apple.Count << endl;
    cout << Apple::Count << endl;
}
