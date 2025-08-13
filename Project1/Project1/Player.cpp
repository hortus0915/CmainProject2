
#include "Player.h"
#include <iostream>
#include <AccCtrl.h>


Player::Player(string nickname)
{
	setNickname(nickname);
}

void Player::attack(Monster* monster)
{
	monster->TakeDamage(this, power);
}

void Player::printPlayerStatus()
{
	cout << "------------------------------------" << '\n';
	cout << "현재 능력치 : " << getPower() << '\n';
	cout << "닉네임: " << nickname << '\n';
	cout << "Lv. " << level << '\n';
	cout << "HP: " << HP << '\n';
	cout << "MP: " << MP << '\n';
	cout << "공격력: " << power << '\n';
	cout << "방어력: " << defence << '\n';
	cout << "정확도: " << accuracy << '\n';
	cout << "속도: " << speed << '\n';
	cout << "------------------------------------" << '\n';
}

void Player::TakeDamage(Monster* monster, int damage)
{
	int calculDamate = damage - defence;
	calculDamate = calculDamate <= 0 ? 1 : calculDamate;
	cout << monster->getName() << "이(가) " << calculDamate << "의 피해를 입혔습니다.\n";
	setHP(HP - calculDamate);


	if (setHP(HP - calculDamate))
	{
		cout << nickname << "이(가) 쓰러졌습니다.\n";
	}
}

void Player::setJobName(string jobname)
{
	this->job_name = jobname;
}

void Player::setNickname(string nickname)
{
	this->nickname = nickname;
}

void Player::setLevel(int level)
{
	this->level = level;
}


bool Player::setHP(int HP)
{

	cout << nickname << "의 HP가 " << this->HP << "에서 " << HP << "로 변경되었습니다.\n";
	this->HP = HP <= 0 ? 0 : HP;
	return  this->HP <= 0;
}

bool Player::setMP(int MP)
{
	this->MP = MP;
	return true;
}

void Player::setPower(int power)
{
	this->power = power;
}

void Player::setDefence(int defence)
{
	this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
	this->speed = speed;
}
