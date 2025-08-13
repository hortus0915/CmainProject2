
#include "Player.h"
#include "Archer.h"
#include "Magician.h"
#include "Thief.h"
#include "Warrior.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string jobs[4] = {"전사","마법사", "도적", "궁수"};
    int job_num = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << '\n';
    cout << nickname << "님, 환영합니다!" << '\n';
    cout << "* 원하시는 직업을 선택해주세요." << '\n';

    for (int i = 0; i < 4; i++)
    {
        cout << (i + 1) << ". " << jobs[i] << '\n';
    }

    cout << "선택: ";
    cin >> job_num;

    cout << "직업이 " << jobs[job_num - 1] << "로 설정되었습니다." << '\n';

    switch (job_num)
    {
    case 1:
        player = new Warrior(nickname, jobs[job_num -1]);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << '\n';
        return 1;
    }
	
    player->printPlayerStatus();

	Monster* monster = new Monster("슬라임");
    srand(static_cast<unsigned int>(time(0))); // 시드
    int r = rand() % 2;
    bool isBattle = true;
    while (isBattle)
    {
		r == 0 ? player->attack(monster) : monster->attack(player);

        if(player->getHP() <= 0 ||monster->getHP() <=0)
			isBattle = false;
        
    }

    delete player;

    return 0;
}
