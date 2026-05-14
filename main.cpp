#include <iostream>
#include <vector>

#include "fireball.h"
#include "physical.h"
#include "hybridAttack.h"
#include "battleMageAttack.h"




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
    Fire attkMagicFire(15.f, 5.f, 10.f, 5.f, 0.5f, "Enemy is on fire");

    std::cout << "\n\n\n---------Fire attack---------" << std::endl;
    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagicFire.DealMagicDamage(hp, &manaPool);
    std::cout << "Hp after: " << hp << std::endl;

    std::cout << "\n\n";

    std::cout << "Hp before: " << hp << std::endl;
    hp = attkMagicFire.DealMagicDamage(hp, &manaPoolEmpty);
    std::cout << "Hp after: " << hp << std::endl;

    // Fireball
    Fireball attkMagicFireball(10.f, 10.f, 35.f, 5.f, 0.5f, "Enemy got ignited by fireball!", 40.f);

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


    // Diamond inheritance

    std::cout << "\n\n--------- CONSTRUCTION PHASE (Multiple & Diamond Inheritance) ---------" << std::endl;
    
    std::cout << "[Creating HybridAttack (2 Parents)]" << std::endl;
    HybridAttack* hybrid = new HybridAttack(30.0, 2.0, 30.0, WeaponType::Sword);
    
    std::cout << "\n[Creating BattleMageAttack (3 Parents: Physical, Fire, Utility)]" << std::endl;
    
    BattleMageAttack* battleMage = new BattleMageAttack(50.0, 3.0, WeaponType::Spear, 40.0, 4.0, 0.8, "BattleMage Fury!");

    std::cout << "\n\n--------- LATE BINDING DEMONSTRATION (Polymorphism) ---------" << std::endl;
    
    
    std::vector<Attack*> battleQueue;
    battleQueue.push_back(new Attack(10.0, 1.0));                       
    battleQueue.push_back(new Physical(30.0, 2.0, WeaponType::Spear)); 
    battleQueue.push_back(hybrid);      // Diamond structure
    battleQueue.push_back(battleMage);  // Triple parent structure

    for (Attack* current : battleQueue) {
        std::cout << "\n[!] Executing action via Attack* pointer:" << std::endl;
        std::cout << "Target HP before: " << hp << std::endl;

        
        hp = current->DealDamage(hp);

        std::cout << "Target HP after: " << hp << std::endl;
    }

    std::cout << "\n\n--------- DESTRUCTION PHASE (Reverse Order) ---------" << std::endl;
    
    
    for (size_t i = 0; i < battleQueue.size(); ++i) {
        std::cout << "Deleting object #" << i + 1 << " (Index " << i << "):" << std::endl;
        delete battleQueue[i]; 
        std::cout << "------------------------------------------" << std::endl;
    }

    return 0;
}