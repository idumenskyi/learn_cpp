#include <iostream>
#include <string>
using namespace std;
class Component
{
public:
    Component(string CompanyName)
    {
        cout << "Component constructor" << endl;
        this->CompanyName = CompanyName;
    }
    string CompanyName;
};
class GPU : public Component
{
public:
    GPU(string CompanyName): Component(CompanyName)
    {
        cout << "GPU constructor" << endl;
    }

};
class Memory : public Component
{
public:
    Memory(string CompanyName): Component(CompanyName)
    {
        cout << "Memory constructor" << endl;
    }

};
class GraphicCard : public GPU, public Memory
{
public:
    GraphicCard(string GPUCompanyName, string MemoryCompanyName): GPU(GPUCompanyName), Memory(MemoryCompanyName)
    {
        cout << "GraphicCard constructor" << endl;
    }

};

class Character
{
public:
    Character()
    {
        cout << "Character Constructor" << endl;
    }
    int HP;
};
class Orc: public virtual Character
{
public:
    Orc()
    {
        cout << "Orc Constructor" << endl;
    }

};
class Warrior: public virtual Character
{
public:
    Warrior()
    {
        cout << "Warrior Constructor" << endl;
    }

};
class OrcWarrior: public Orc, public Warrior
{
public:
    OrcWarrior()
    {
        cout << "OrcWarrior Constructor" << endl;
    }

};
int main()
{
    GraphicCard  gc("Nvidia", "Kingston");
    cout << endl << endl;
    OrcWarrior orc;
    return 0;
}
