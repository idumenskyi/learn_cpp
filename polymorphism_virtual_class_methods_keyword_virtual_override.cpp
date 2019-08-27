#include <iostream>
#include <string>.
using namespace std;
class Gun{
public:
    virtual void Shoot()
    {
        cout << "BANG" << endl;
    }
};
class SubmachineGun: public Gun
{
public:
    void Shoot() override
    {
        cout << "BANG, BANG, BANG" << endl;
    }
};
class Player
{
public:
    void Shoot(Gun *gun)
    {
        gun->Shoot();
    }
};
int main()
{
    Gun gun;
    SubmachineGun machinegun;
    Player player;
    player.Shoot(&machinegun);
    //Gun *weapon = &machinegun; //weapon is referring on own type
    //weapon->Shoot();
    //gun.Shoot();
    return 0;
}
