
#pragma once
#include <string>

#include "Monster.h"

using namespace std;

class Player
{
public:
    explicit Player(string nickname);
    virtual ~Player() = default;

    virtual void attack(Monster* monster);
    virtual void printPlayerStatus();

    // getter 함수
    string getJobName() { return this->job_name; }
    string getNickname() { return this->nickname; }
    int getLevel() { return this->level; }
    int getHP() { return this->HP; }
    int getMP() { return this->MP; }
    int getPower() { return this->power; }
    int getDefence() { return this->defence; }
    int getAccuracy() { return this->accuracy; }
    int getSpeed() { return this->speed; }

    void TakeDamage(Monster* monster,int damage);
    void setJobName(string nickname);
    void setNickname(string nickname);
    void setLevel(int level);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname;
    int level =1;
    int HP =0;
    int MP =0;
    int power =1;
    int defence =1;
    int accuracy =1;
    int speed =1;
};
