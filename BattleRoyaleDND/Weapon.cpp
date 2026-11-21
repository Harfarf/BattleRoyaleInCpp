#include "Weapon.h"

Weapon::Weapon(float damage, float durability)
{
	this->damage = damage;
	this->durability = durability;

};

Weapon::~Weapon(){};

float Weapon::GetDamage() {
	return this->damage;
}
