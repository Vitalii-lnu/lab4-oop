#ifndef BATTLE_MAGE_ATTACK_H
#define BATTLE_MAGE_ATTACK_H

#include <iostream>

#include "physical.h"
#include "fire.h"
#include "utility.h"

class BattleMageAttack : public Physical, public Fire, public Utility {
public:
    BattleMageAttack(double damage, double cooldown, WeaponType type, double manaCost, double effectDuration, double attackSpeed, const char* notification) 
        : Attack(damage, cooldown),
          Physical(damage, cooldown, type),
          Fire(damage, cooldown, manaCost, effectDuration, attackSpeed, notification),
          Utility()
    {
        std::cout << "[+] Constructor: BattleMageAttack\n";
    }

    ~BattleMageAttack() { std::cout << "[-] Destructor: BattleMageAttack\n"; }

 
    double DealDamage(double hp) override;
};

#endif
