#include <iostream>
#include <string>.
using namespace std;
class Weapon
{
public:
    // pure virtual function
    virtual void Shoot() = 0;
    void func()
    {
        cout << "func()" << endl;
    }
};
class Gun: public Weapon
{
public:
    void Shoot() override
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
class AntiTankWeapons: public Weapon{
public:
    void Shoot() override
    {
        cout << "rocket launched" << endl;
    }
};

class Knife: public Weapon
{
public:
    void Shoot() override
    {
        cout << "stab" << endl;
    }
};

class Player
{
public:
    void Shoot(Weapon *weapon)
    {
        weapon->Shoot();
    }
};
int main()
{
    //Gun gun;
    //SubmachineGun machinegun;
    //Player player;
    //player.Shoot(&machinegun);
    //Gun *weapon = &machinegun; //weapon is referring on own type
    //weapon->Shoot();
    //gun.Shoot();
    //AntiTankWeapons ATW;
    Knife knife;
    knife.func();
    Player player;
    player.Shoot(&knife);
    return 0;
}
