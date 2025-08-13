

#include "Magician.h"
#include <iostream>


Magician::Magician(std::string nickName): Player(nickName)
{
    setJobName("마법사");
    setNickname(nickName);
    setLevel(1);
    setHP(100);
    setMP(100);
    setPower(100);
    setDefence(10);
    setAccuracy(100);
    setSpeed(100);
}

void Magician::attack(Monster* monster)
{
    cout << getJobName() << '\n';
    Player::attack(monster);
}
