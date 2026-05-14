#include "battleMageAttack.h"

double BattleMageAttack::DealDamage(double hp) {
    LogAction();
    std::cout << "Dealing TRIPLE combined damage (Physical + Magic + Fire)!" << std::endl;
    return hp - GetDamage();
}