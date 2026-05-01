#ifndef FIRE_H
#define FIRE_H

#include "attack.h"
#include "magic.h"


class Fire : private Magic
{
private:
    double effectDuration;
    double attackSpeed;

public:
    Fire() : Magic(), effectDuration(3.f), attackSpeed(500) {}

    Fire(double damage, double cooldown, double manaCost, double effectDuration, double attackSpeed) 
        : Magic(damage, cooldown, manaCost), effectDuration(effectDuration), attackSpeed(attackSpeed)
    {}

    double DealDamage(double hp);


public:

    double GetEffectDuration();
    double GetAttackSpeed();

    void SetEffectDuration(double effectDuration);
    void SetAttackSpeed(double attackSpeed);
};







#endif