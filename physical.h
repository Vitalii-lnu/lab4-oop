#ifndef PHYSICAL_H
#define PHYSICAL_H

#include "attack.h"


enum WeaponType
{
    Undefined = -1, Sword= 0, Spear, Bow 
};

class Physical : private Attack
{
private:
    WeaponType type;

    char* WeaponTypeToString();    

public:
    Physical() : Attack() {}

    Physical(double damage, double cooldown, WeaponType type)
        : Attack(damage, cooldown), type(type)
    {}

    double DealDamage(double hp) override;


// Getters/Setters
public:
    WeaponType GetAttackType();

    void SetAttackType(WeaponType type);


};





#endif