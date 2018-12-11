#include <iostream>
#include "initServant.h"

using namespace std;

void attack_servant(Servant &self, Servant &enemy)
{
    int atk = self.attack(enemy);
    enemy.damaged(atk);
};

int main()
{
    Saber.showinfo();
    Lancer.showinfo();
    attack_servant(Lancer, Saber);
    Saber.showinfo();
    Lancer.showinfo();

    return 0;
}