#include <iostream>
#include <string>
using namespace std;
class Cap
{
public:
    string GetColor()
    {
        return color;
    }
private:
    string color = "red";
};
class Model{
public:
    void InspectModel()
    {
        cout << "Cap is " << cap.GetColor() << endl;
    }

private:
    Cap cap;
};
class Human
{
public:
    void think()
    {
        brain.think(); //delegation
    }
    void InspectTheCap()
    {
        cout << "My cap is " << cap.GetColor() << endl;
    }
private:
    class Brain{
    public:
        void think(){
            cout << "I think!" << endl;
        }

    };
    Brain brain;
    Cap cap;
};

int main()
{

    Human human;
    human.think();
    human.InspectTheCap();
    Model m;
    m.InspectModel();
    return 0;
}
