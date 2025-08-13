#pragma once
#include "Player.h"

class Magician : public Player
{
public:
    explicit Magician(std::string nickName);
    void attack(Monster* monster) override;
};
