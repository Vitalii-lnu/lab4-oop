#include "hybridAttack.h"

double HybridAttack::DealDamage(double hp) {
    std::cout << "Dealing HYBRID damage (Physical + Magic)!" << std::endl;
    return hp - GetDamage();
}