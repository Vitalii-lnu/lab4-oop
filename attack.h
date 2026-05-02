#ifndef ATTACK_H
#define ATTACK_H

class Attack
{
private:
    double damage;
    double cooldown; 


public:

    Attack() : damage(0), cooldown(0) {}
    Attack(double damage, double cooldown)
        : damage(damage), cooldown(cooldown)
    { }

    virtual double DealDamage(double hp);



// Getters/Setters
public:
    double GetDamage();
    double GetCooldown();
    

    void SetDamage(double damage);
    void SetCooldown(double cooldown);


};




#endif