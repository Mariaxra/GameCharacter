#include "game.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>
Game ::Game(std ::string Name, int h, std ::string skillname, double lev, std ::string pow)
{
    if (Name.empty() || skillname.empty() || pow.empty())
    {
        throw std :: invalid_argument("Empty Strings Aren't Availiable !\n");
        return;
    }
    if (h >= 0 && lev >= 0)
    {
        skill s = {skillname, lev};
        v.SetName(Name);
        v.SetHealth(h);
        v.SetSkill(s);
        v.SetPower(pow);
    }
    else 
    {
        throw std :: invalid_argument("Nagetive Numbers Aren't Availiable ! /n");
        return;
    }
}
void Game ::print()
{
    struct skill s = v.GetSkill();
    std ::cout << std ::left << std ::setw(20) << "Name" << "|" << std ::setw(10) << "Health" << 
    "|" << std ::setw(10) << "Skill Name" << "|" << std ::setw(10) << "Level" << "|"
               << std ::setw(10) << "Power" << "|" << '\n';
    std ::cout << std ::string(60, '-') << '\n';
    std ::cout << std ::left << std ::setw(20) << v.GetName() << "|" << std ::setw(10) << v.GetHealth() << "|" << std ::setw(10) << s.skillName << "|" << std ::setw(10) << s.level << "|" << std ::setw(10) << v.GetPower() << "|" << '\n';
}