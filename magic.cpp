#include "magic.h"

#include <iostream>

bool Magic::IsEnoughMana(double currentMana) const
{
    if(currentMana < manaCost) return false;
    return true;
}

double Magic::DealMagicDamage(double hp, double* currentMana)
{
    if (!IsEnoughMana(*currentMana))
    {
        std::cout << "Not enough mana" << std::endl;
        return hp;
    }
    

    std::cout << "Dealing magic damage" << std::endl;

    *currentMana -= manaCost; 

    return hp - GetDamage();
}


double Magic::GetManaCost() const
{
    return manaCost;
}



void Magic::SetManaCost(double manaCost)
{
    this->manaCost = manaCost;
}
