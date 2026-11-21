#pragma once
#include "Weapon.h"
#include <cstdlib> 
#include <iostream>
#include <random>

using namespace std;

class PhysicalWeapon : public Weapon
{
	private:
		float blockingProbability;
	public:
		PhysicalWeapon(float damage, float durability, float blockingProbability);
		~PhysicalWeapon();
		bool CanBlockAttack();
};

