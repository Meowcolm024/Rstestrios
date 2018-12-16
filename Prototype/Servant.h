#ifndef SERVANT_H_
#define SERVANT_H_
#include <iostream>
#include <string>

const std::string types[3] = {"Saber", "Lancer", "Archer"};

class Servant 
{
private:
    std::string name;
    int type;
    int lv;
    int atk;
    int np;
    int hp;
    int get_property(Servant enemy);
    int show_type() {return type;};
public:
    Servant(std::string s_name, int s_type, int s_lv, int s_atk, int s_hp);
    void showinfo() const;
    int attack(Servant enemy);
    void damaged(int e_attack) { hp -= e_attack;};
    ~Servant() {};
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

void Servant::showinfo() const
{
    std::cout << "NAME: " << name;
    std::cout << " CLASS: " << types[type] << " LV: " << lv;
    std::cout << " ATK: " << atk << " HP: " << hp;
    std::cout << std::endl;
};

int Servant::get_property(Servant enemy)
{
    int self_type = type;
    int enemy_type = enemy.show_type(); 

    if ((self_type >= 3) && (enemy_type >= 3))
    {
        self_type -= 3;
        enemy_type -= 3;
    };
    
    if ((self_type < 3) && (enemy_type < 3))
    {
        switch (self_type)
        {
            case 0:
            {
                switch (enemy_type)
                {
                    case 1:
                        return 4;
                    case 2:
                        return 1;
                }
            };
            case 1:
            {
                switch (enemy_type)
                {
                    case 2:
                        return 4;
                    case 0:
                        return 1;
                };
            };
            case 2:
            {
                switch (enemy_type)
                {
                    case 0:
                        return 4;
                    case 1:
                        return 1;
                };
            };
            default:
                return 2;
        }
    }
    else
        return 2;
};

int Servant::attack(Servant enemy)
{
    int property = get_property(enemy);
    return atk * property /2;
};

#endif