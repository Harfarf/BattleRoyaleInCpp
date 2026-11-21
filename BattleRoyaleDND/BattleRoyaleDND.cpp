#include <iostream>
#include "Weapon.h"
#include "PhysicalWeapon.h"

int main()
{
    std::cout << "Hello World!\n";
    PhysicalWeapon test = PhysicalWeapon(6, 3);

    test.CanBlockAttack();

    return 0;
}

