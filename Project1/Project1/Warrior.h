#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
    explicit Warrior(std::string nickName, string jobname);
    void attack(Monster* monster) override;


};
