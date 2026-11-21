#pragma once
class Weapon
{
	private:
		float damage;

	public:
		float durability;

		Weapon(float damage, float durability);
		~Weapon();
		float GetDamage();
};

