#include "Archer.h"

#include <iostream>

Archer::Archer(std::string nickName) : Player(nickName)
{
	string name = "Archer";
    setJobName(name);
    setNickname(nickName);
    setLevel(1);
    setHP(100);
    setMP(100);
    setPower(100);
    setDefence(100);
    setAccuracy(100);
    setSpeed(100);
    
}

void Archer::attack(Monster* monster)
{
    cout << getJobName() << '\n';
    Player::attack(monster);
}
