#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int age;
    string name;
};
int main()
{
    Person firstPerson; // create object of class Person
    firstPerson.age = 20;
    firstPerson.name = "Some Person";
    cout << firstPerson.age << endl;
    cout << firstPerson.name << endl;
    Person secondPerson; // create object of class Person
    secondPerson.age = 21;
    secondPerson.name = "Some Person1";
    cout << secondPerson.age << endl;
    cout << secondPerson.name << endl;
    return 0;
}
