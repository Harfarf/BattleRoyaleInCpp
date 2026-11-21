#include "PhysicalWeapon.h"

PhysicalWeapon::PhysicalWeapon(float damage, float durability, float blockingProbability): Weapon(damage, durability)
{
	this->blockingProbability = blockingProbability;
};
PhysicalWeapon::~PhysicalWeapon() {};

bool PhysicalWeapon::CanBlockAttack() 
{

	static random_device rd;

	static mt19937 gen(rd());

	bernoulli_distribution distribution();

	return false;

};