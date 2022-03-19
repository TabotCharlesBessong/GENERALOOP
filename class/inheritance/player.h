#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;
// #include <string_view>
#include "person.h"

class Player : public Person
{
    friend ostream& operator<<(ostream& out, const Player& player);
public:
    Player() = default;
    Player(string game_param);
    
private : 
    string m_game{"None"};
};

#endif // PLAYER_H