#ifndef MAGIC_H
#define MAGIC_H

#include "attack.h"

class Magic : virtual public Attack
{
private:
    double manaCost;

    using Attack::DealDamage;

public:
    
    Magic() : Attack() {
        std::cout << "[+] Constructor: Magic\n";
    }
    
    Magic(double damage, double cooldown, double manaCost) : Attack(damage, cooldown), manaCost(manaCost) {
        std::cout << "[+] Constructor: Magic (Parametrized)\n";
    }
    
    ~Magic() {
        std::cout << "[-] Destructor: Magic\n";
    }

    
    virtual double DealMagicDamage(double hp, double* currentMana);


protected:
    bool IsEnoughMana(double currentMana) const;


// Getters/Setters
public:
    double GetManaCost() const;

    void SetManaCost(double manaCost);
    
};







#endif