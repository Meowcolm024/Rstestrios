#ifndef SERVANT_H_
#define SERVANT_H_
#include <iostream>
#include <string>
#include "rule.h"

class Servant 
{
private:
    std::string name;
    int type;
    int lv;
    int atk;
    int hp;
    int np;
public:
    Servant(std::string s_name, int s_type, int s_lv, int s_atk, int s_hp);
    void showinfo();
    void attack(Servant enemy);
};

Servant::Servant(std::string s_name, int s_type, int s_lv, int s_atk, int s_hp)
{
    name = s_name;
    type = s_type;
    lv = s_lv;
    atk = s_atk;
    hp = s_hp;
    np = 0;
};

void Servant::showinfo()
{
    std::cout << "NAME: " << name;
    std::cout << " CLASS: " << types[type] << " LV: " << lv;
    std::cout << " ATK: " << atk << " HP: " << hp;
    std::cout << std::endl;
}

#endif