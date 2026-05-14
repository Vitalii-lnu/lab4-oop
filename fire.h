#ifndef FIRE_H
#define FIRE_H

#include "magic.h"


class Fire : protected Magic
{
private:
    double effectDuration;
    double attackSpeed;
    const char* notification;

public:
    Fire() : Magic(), effectDuration(3.f), attackSpeed(500), notification("Enemy is on fire!") {}

    Fire(double damage, double cooldown, double manaCost, double effectDuration, double attackSpeed, const char* notification) 
        : Magic(damage, cooldown, manaCost), effectDuration(effectDuration), attackSpeed(attackSpeed), notification(notification)
    {}

    double DealMagicDamage(double hp, double* currentMana) override;


public:

    double GetEffectDuration() const;
    double GetAttackSpeed() const;
    const char* GetNotification() const;

    void SetEffectDuration(double effectDuration);
    void SetAttackSpeed(double attackSpeed);
    void SetNotificaton(const char* notification);
};







#endif