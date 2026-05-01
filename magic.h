#ifndef MAGIC_H
#define MAGIC_H

#include "attack.h"

class Magic : protected Attack
{
private:
    double manaCost;
public:
    Magic() : Attack() {}

    Magic(double damage, double cooldown, double manaCost) : Attack(damage, cooldown) {}

    double DealDamage(double hp) override;


// Getters/Setters
private:
    double GetManaCost();

    void SetManaCost(double manaCost);
    
};







#endif