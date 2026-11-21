#pragma once
#include "Weapon.h"
class MagicalWeapon: public Weapon
{
	private:
		void MagicalAttack();

	public:
		MagicalWeapon(float damage, float durability);
		~MagicalWeapon();
};

