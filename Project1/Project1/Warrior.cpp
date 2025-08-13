#include "Warrior.h"

#include <iostream>

Warrior::Warrior(std::string nickName , string jobname ) : Player(nickName)
{
	setJobName(jobname);
    setNickname(nickName);
    setLevel(1);
    setHP(100);
    setMP(100);
    setPower(50);
    setDefence(10);
    setAccuracy(100);
    setSpeed(100);
}

void Warrior::attack(Monster* monster)
{
    cout << this->job_name << '\n';
    cout << getJobName() << '\n';
    Player::attack(monster);
}
