#include "fire.h"

#include <iostream>
#include <chrono>
#include <thread>


double Fire::DealDamage(double hp) 
{
    int damageTickCountsMax = effectDuration / attackSpeed;
    
    for (int i = 1; i <= damageTickCountsMax; ++i) 
    {
        std::this_thread::sleep_for(std::chrono::milliseconds((int)attackSpeed));

        double oldHp = hp;
        hp -= damage;

        std::cout << "Dealing fire damage (Tick " << i << "/" << damageTickCountsMax 
                  << "): HP " << oldHp << " -> " << hp << std::endl;
    }

    std::cout << "Fire effect ended." << std::endl;
    return hp;
}


double Fire::GetEffectDuration()
{
    return effectDuration;
}
double Fire::GetAttackSpeed()
{
    return attackSpeed;
}


void Fire::SetEffectDuration(double effectDuration)
{
    this->effectDuration = effectDuration;
}

void Fire::SetAttackSpeed(double attackSpeed)
{
    this->attackSpeed = attackSpeed;
}