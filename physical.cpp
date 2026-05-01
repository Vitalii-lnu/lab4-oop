#include "physical.h"

#include <iostream>

WeaponType Physical::GetAttackType()
{
    return type;
}

char* Physical::WeaponTypeToString()
{
    switch (type)
    {
    case WeaponType::Sword:
        return "Sword";
        break;

    case WeaponType::Spear:
        return "Sword";
        break;
    
    case WeaponType::Bow:
        return "Sword";
        break;

    case WeaponType::Undefined:
        return "No Weapon";
        break;
    default:
        return "UnknownWeapon";
        break;
    }
}


void Physical::SetAttackType(WeaponType type)
{
    this->type = type;
}

double Physical::DealDamage(double hp)
{
    std::cout << "Dealing physical damage using " << WeaponTypeToString() << std::endl;

    
    return hp - damage;
}