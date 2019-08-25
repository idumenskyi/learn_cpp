#include <iostream>
#include <string>
using namespace std;
class Human{
private:
    string name = "Some Person";
public:
    string GetName()
    {
        return name;
    }
    void SetName(string name){

    this -> name = name;
    }
};
class Student : public Human
{
public:

    string group;
    void learn()
    {
        cout << "I'm learn!" << endl;
    }
};
class ExtramuralStudent : public Student
{
public:
    void learn()
    {
       cout << "i am go less often to the university than normal student" << endl;
    }
};
class Professor : public Human
{
public:

    string subject;
};
int main()
{
    Student st;
    st.learn();
    cout << st.GetName() << endl;
    st.SetName("Dadid");
    cout << st.GetName() << endl;
    ExtramuralStudent extrast;
    extrast.learn();
    Professor pr;
    //pr.name;
    return 0;
}
