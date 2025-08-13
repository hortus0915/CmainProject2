#pragma once

#include <string>

using namespace  std;

class Player;

class Monster
{
public:
	Monster(string name);

	string getName() { return name;}
	int getHP() {return HP;}
	int getPower() {return power;}
	int getDefence() {return defence;}
	int getSpeed() {return speed;}

	void attack(Player* player);
	void TakeDamage(Player* player,int damage);
	void setName(string name);
	bool setHP(int HP);
	void setPower(int power);
	void setDefence(int defence);
	void setSpeed(int speed);
protected:
	string name; 
	int HP; 
	int power; 
	int defence; 
	int speed; 
};

