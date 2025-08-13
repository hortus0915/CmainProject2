#pragma once
#include "Player.h"

class Archer : public Player
{
public:
    explicit Archer(std::string nickName);
    void attack(Monster* monster) override;
};
