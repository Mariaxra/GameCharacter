#include "character.hpp"
#include <iostream>
#include <iomanip>
#include <iostream>

std :: string Character :: GetName() const { return name; }
    double Character ::  GetHealth() const { return health; }
    skill Character :: GetSkill() const { return skills; }
    std ::string  Character ::  GetPower() const { return power; }

    void Character :: SetName(std ::string n) { name = n; }
    void Character :: SetHealth(double h) { health = h; }
    void Character ::  SetSkill(skill f) { skills = f; }
    void Character ::  SetPower(std ::string p) { power = p; }