#include <iostream>

using namespace std;
/*
enum PCState
{
    OFF,
    ON,
    SLEEP
};
*/
class PC
{
public:
    enum PCState
    {
        OFF,
        ON,
        SLEEP
    };
    PCState GetState()
    {
        return State;
    }
    void SetState(PCState State)
    {
        this->State = State;
    }

private:
    PCState State;
};
enum Speed
{ MIN = 120, RECOMENDED = 540, MAX = 700};
int main()
{
    PC pc;
    pc.SetState(PC::PCState::ON);
    /*
    if (pc.GetState() == PCState::ON)
    {
        cout << "PC is working" << endl;
    }
    */
    switch (pc.GetState())
    {
        case PC::PCState::OFF:
            cout << "PC is switched off" << endl;
            break;
        case PC::PCState::ON:
            cout << "PC is working" << endl;
            break;
        case PC::PCState::SLEEP:
            cout << "PC is sleeping" << endl;
            break;
    }
    Speed sp = Speed::MAX;
    cout << sp << endl;
    return 0;
}
