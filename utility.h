#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>


class Utility {
public:
    Utility() { std::cout << "[+] Constructor: Utility\n"; }
    virtual ~Utility() { std::cout << "[-] Destructor: Utility\n"; }
    void LogAction() { std::cout << ">> Log: BattleMage used a combined skill\n"; }
};


#endif