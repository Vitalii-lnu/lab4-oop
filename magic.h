#ifndef MAGIC_H
#define MAGIC_H

#include "attack.h"

class Magic : protected Attack
{
private:
    double manaCost;

    using Attack::DealDamage;

public:
    Magic() : Attack() {}

    Magic(double damage, double cooldown, double manaCost) : Attack(damage, cooldown), manaCost(manaCost) {}

    virtual double DealMagicDamage(double hp, double* currentMana);


protected:
    bool IsEnoughMana(double currentMana) const;


// Getters/Setters
public:
    double GetManaCost() const;

    void SetManaCost(double manaCost);
    
};







#endif