#include "Thief.h"

#include <iostream>

Thief::Thief(std::string nickName) : Player(nickName)
{
	string name = "도적";
    this->job_name = name;
    setJobName(name);
    setNickname(nickName);
    setLevel(1);
    setHP(100);
    setMP(100);
    setPower(50);
    setDefence(10);
    setAccuracy(100);
    setSpeed(100);
}

void Thief::attack(Monster* monster)
{
    cout << getJobName() << '\n';
    Player::attack(monster);
}
