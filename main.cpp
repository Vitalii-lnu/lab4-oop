#include <iostream>

#include "fireball.h"

#include "physical.h"



int main()
{
    double hp = 500.f;


    // Attack
    Attack attk(50.f, 4.f);


    std::cout << "\n\n\n---------Pure attack---------" << std::endl;
    std::cout << "Hp before: " << hp << std::endl;
    hp = attk.DealDamage(hp);
    std::cout << "Hp after: " << hp << std::endl;

    // Physical
    Physical attkPhysicalSword(20.f, 2.f, WeaponType::Sword);
    Physical attkPhysicalSpear(30.f, 3.f, WeaponType::Spear);

    std::cout << "\n\n\n---------Physical attack---------" << std::endl;
    std::cout << "Hp before: " << hp << std::endl;
    hp = attkPhysicalSword.DealDamage(hp);
    std::cout << "Hp after: " << hp << std::endl;

    std::cout << "\n\n";

    std::cout << "Hp before: " << hp << std::endl;
    hp = attkPhysicalSpear.DealDamage(hp);
    std::cout << "Hp after: " << hp << std::endl;

    // Magic
    Magic attkMagic(10.f, 0.5f, 25.f);
    double manaPool = 100.f;
    double manaPoolEmpty = 0.f;

    std::cout << "\n\n\n---------Pure Magic attack---------" << std::endl;
    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagic.DealMagicDamage(hp, &manaPool); 
    std::cout << "Hp after: " << hp << std::endl;

    std::cout << "\n\n";

    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagic.DealMagicDamage(hp, &manaPoolEmpty); 
    std::cout << "Hp after: " << hp << std::endl;

    // Fire
    Fire attkMagicFire(15.f, 5.f, 10.f, 5.f, 0.5f);

    std::cout << "\n\n\n---------Fire attack---------" << std::endl;
    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagicFire.DealMagicDamage(hp, &manaPool);
    std::cout << "Hp after: " << hp << std::endl;

    std::cout << "\n\n";

    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagicFire.DealMagicDamage(hp, &manaPoolEmpty);
    std::cout << "Hp after: " << hp << std::endl;

    // Fireball
    Fireball attkMagicFireball(10.f, 10.f, 35.f, 5.f, 0.5f, 40.f);

    std::cout << "\n\n\n---------Fireball attack---------" << std::endl;
    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagicFireball.DealMagicDamage(hp, &manaPool);
    std::cout << "Hp after: " << hp << std::endl;

    std::cout << "\n\n";

    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagicFireball.DealMagicDamage(hp, &manaPoolEmpty);
    std::cout << "Hp after: " << hp << std::endl;


    std::cout << "Overloaded methods ahead!" << std::endl;
    attkMagicFireball.Print();
    attkMagicFireball.Print("Hello fireball");

    return 0;
}