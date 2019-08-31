#include <iostream>
#include <string>
using namespace std;
class Person
{
public:

    Person(string name)
    {
        this->name = name + ".";
        this->age = 0;
        this->weight = 0;
    }
    Person(string name, int age): Person(name)
    {
        this->age = age;
    }
    Person(string name, int age, int weight): Person(name, age)
    {
        this->weight = weight;
    }
    string name;
    int age;
    int weight;
};
int main()
{
    Person p("Some name", 20, 75);

    return 0;
}
