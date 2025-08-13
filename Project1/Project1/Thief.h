#pragma once
#include <string>

#include "Player.h"

class Thief : public Player
{
public:
    explicit Thief(std::string nickName);
    void attack(Monster* monster) override;
};
