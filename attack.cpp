#include "attack.h"

#include <iostream>

double Attack::DealDamage(double hp)
{
    std::cout << "Dealing pure damage" << std::endl;
    return hp - damage;
}



double Attack::GetDamage()
{
    return this->damage;
}

double Attack::GetCooldown()
{
    return this->cooldown;
}


void Attack::SetDamage(double damage)
{
    this->damage = damage;
}

void Attack::SetCooldown(double cooldown)
{
    this->cooldown = cooldown;
}

