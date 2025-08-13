#include "Monster.h"

#include <iostream>
#include "Player.h"

Monster::Monster(string name)
{
	this->name = "name";
	setName(name);
	setHP(100);
	setPower(100);
	setDefence(10);
	setSpeed(100);
}


void Monster::attack(Player* player)
{
	player->TakeDamage(this,power);
}

void Monster::TakeDamage(Player* player,int damage)
{	
	int calculDamate = damage - defence;
	calculDamate = calculDamate <= 0 ? 1 : calculDamate;
	cout << player->getNickname() << "이(가) " << calculDamate << "의 피해를 입었습니다.\n";
	setHP(HP - calculDamate);
	if (setHP(HP - calculDamate))
	{
		cout << name << "이(가) 쓰러졌습니다.\n";
	}
	
}

void Monster::setName(string name)
{
	this->name = name;
}

bool Monster::setHP(int HP)
{
	cout << name << "의 HP가 " << this->HP << "에서 " << HP << "로 변경되었습니다.\n";
	this->HP = HP <= 0 ? 0 : HP;
	return this->HP <= 0;
}

void Monster::setPower(int power)
{
	this->power = power;
}

void Monster::setDefence(int defence)
{
	this->defence = defence;
}

void Monster::setSpeed(int speed)
{
	this->speed = speed;
}
