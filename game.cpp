#include "game.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
bool Is_Intiger(std :: string x)
{
    if(x.find('.') != std :: string :: npos)
    {
        throw std :: invalid_argument(  "Floating point aren't availiable .");
    }
   
    try {
        stoi(x); 
        return true;
    } catch (const std::invalid_argument& e) {
        return false; 
    } catch (const std::out_of_range& e) {
        return false;
    }
   
}
Game ::Game(std ::string Name, std :: string h, std ::string skillname, std :: string lev, std ::string pow)
{
    if (Name.empty() || skillname.empty() || pow.empty())
    {
        throw std :: invalid_argument("Empty Strings Aren't Availiable !");
        return;
    }

    if(Is_Intiger(h) && Is_Intiger(lev)){
    int health = stoi(h);
    int l = stoi(lev);
    if (health >= 0 && l >= 0 )
    {
        skill s = {skillname, l};
        v.SetName(Name);
        v.SetHealth(health);
        v.SetSkill(s);
        v.SetPower(pow);
    }
    else 
    {
        throw std :: invalid_argument("Nagetive Numbers Aren't Availiable ! \n");
        return;
    }
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