#include <iostream>
#include <string>
using namespace std;
class Human;
class Apple;
class Human
{
public:
    void TakeApple(Apple &apple);

};
class Apple
{
friend Human; // this method breaks encapsulation
public:
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
    }
private:
    int weight;
    string color;
};
int main()
{
    Apple apple(120, "Green");
    Human human;
    human.TakeApple(apple);
    return 0;
}
void Human::TakeApple(Apple &apple)
{
        cout << "TakeApple " << " weight = " << apple.weight << " color = " << apple.color << endl;
}
