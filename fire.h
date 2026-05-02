#ifndef FIRE_H
#define FIRE_H

#include "magic.h"


class Fire : protected Magic
{
private:
    double effectDuration;
    double attackSpeed;

public:
    Fire() : Magic(), effectDuration(3.f), attackSpeed(500) {}

    Fire(double damage, double cooldown, double manaCost, double effectDuration, double attackSpeed) 
        : Magic(damage, cooldown, manaCost), effectDuration(effectDuration), attackSpeed(attackSpeed)
    {}

    double DealMagicDamage(double hp, double* currentMana) override;


public:

    double GetEffectDuration() const;
    double GetAttackSpeed() const;

    void SetEffectDuration(double effectDuration);
    void SetAttackSpeed(double attackSpeed);
};







#endif