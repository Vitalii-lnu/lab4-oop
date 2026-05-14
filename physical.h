#ifndef PHYSICAL_H
#define PHYSICAL_H

#include "attack.h"


enum WeaponType
{
    Undefined = -1, Sword = 0, Spear, Bow 
};

class Physical : virtual public Attack
{
protected:
    WeaponType type;

    const char* WeaponTypeToString() const;    

public:
    Physical() : Attack() {
        std::cout << "[+] Constructor: Physical\n";
    }
    Physical(double damage, double cooldown, WeaponType type) : Attack(damage, cooldown), type(type) {
        std::cout << "[+] Constructor: Physical (Parametrized)\n";
    }
    ~Physical() {
        std::cout << "[-] Destructor: Physical\n";
    }

    double DealDamage(double hp) override;


// Getters/Setters
public:
    WeaponType GetAttackType() const;

    void SetAttackType(WeaponType type);


};





#endif