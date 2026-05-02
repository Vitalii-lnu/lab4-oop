#include "fireball.h"

#include <iostream>


double Fireball::DealMagicDamage(double hp, double* currentMana)
{
    if (!IsEnoughMana(*currentMana))
    {
        std::cout << "Not enough mana to cast a fireball" << std::endl;
        return hp;        
    }

    std::cout << "Fireball exploded! Fire effect is applied on enemy" << std::endl;
    hp -= explosionDamage;

    hp = Fire::DealMagicDamage(hp, currentMana); // inside is fire effect logic (it reduces mana inside)

    return hp;
    
}



double Fireball::GetExplosionDamage() const
{
    return explosionDamage;
}


void Fireball::SetExplosionDamage(double explosionDamage)
{
    this->explosionDamage = explosionDamage;
}