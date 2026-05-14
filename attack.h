#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>

class Attack
{
protected:
    double damage;
    double cooldown; 


public:

    Attack() : damage(0), cooldown(0) {
        std::cout << "[+] Constructor: Attack (Default)\n";
    }

    Attack(double d, double cd) : damage(d), cooldown(cd) {
        std::cout << "[+] Constructor: Attack (Parametrized)\n";
    }

    virtual ~Attack() {
        std::cout << "[-] Destructor: Attack\n";
    }

    virtual double DealDamage(double hp);



// Getters/Setters
public:
    double GetDamage();
    double GetCooldown();
    

    void SetDamage(double damage);
    void SetCooldown(double cooldown);
    

};




#endif