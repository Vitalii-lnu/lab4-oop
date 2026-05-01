#include "magic.h"

#include <iostream>

double Magic::DealDamage(double hp)
{
    std::cout << "Dealing magic damage" << std::endl;

    return hp - damage;
}


double Magic::GetManaCost()
{
    return manaCost;
}



void Magic::SetManaCost(double manaCost)
{
    this->manaCost = manaCost;
}
