#ifndef FIREBALL_H
#define FIREBALL_H

#include "fire.h"

class Fireball : protected Fire
{
private:
    double explosionDamage;

public:
    Fireball() : Fire() {}

    Fireball(double damage, double cooldown, double manaCost, double effectDuration, double attackSpeed, double explosionDamage)
        : Fire(damage, cooldown, manaCost, effectDuration, attackSpeed), explosionDamage(explosionDamage)
    {}

    double DealMagicDamage(double hp, double* currentMana) override;


public:
    double GetExplosionDamage() const;

    void SetExplosionDamage(double explosionDamage);

    void Print();
    void Print(const char* line);
};




#endif