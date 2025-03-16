#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
struct skill
{

    std ::string skillName;
    int level;
};
class Character
{

private:
    std ::string name;
    int health;
    skill skills;
    std ::string power;

public:
    std ::string GetName() const;
    double GetHealth()const ;
    skill GetSkill() const ;
    std ::string GetPower() const ;

    void SetName(std ::string n);
    void SetHealth(double h);
    void SetSkill(skill f);
    void SetPower(std ::string p);
};

#endif