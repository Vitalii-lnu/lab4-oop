#ifndef HYBRID_ATTACK_H
#define HYBRID_ATTACK_H

#include "physical.h"
#include "magic.h"

#include "iostream"

class HybridAttack : public Physical, public Magic {

private:

    const char* line;

public:
    
    HybridAttack(double damage, double cooldown, double manaCost, WeaponType type) 
        : Attack(damage, cooldown), Physical(damage, cooldown, type), Magic(damage, cooldown, manaCost) {
        std::cout << "[+] Constructor: HybridAttack\n";
    }
    ~HybridAttack() {
        std::cout << "[-] Destructor: HybridAttack\n";
    }


    double DealDamage(double hp);

};
#endif