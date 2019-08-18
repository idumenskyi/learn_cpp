#include <iostream>
#include <string>
using namespace std;
class Apple;
class Apple
{
public:
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
    static int GetCount()
    {
        return Count;
    }
    static void ChangeColor(Apple &apple, string color)
    {
        apple.color = color;
    }
    void ChangeColorNonStatic(string color)
    {
        this->color = color;
    }
private:
    static int Count;
    int id;
    int weight;
    string color;
};
int Apple::Count = 0;
int main()
{
    Apple apple(120, "Green");
    Apple::ChangeColor(apple, "Yellow");
    apple.ChangeColorNonStatic("Red");
}
