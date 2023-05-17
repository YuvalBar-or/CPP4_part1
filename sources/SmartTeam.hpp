#pragma once
#include "Team.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"
#include <vector>
using namespace std; 
namespace ariel{};

class SmartTeam: public Team{
    private:
        vector<Character *> team;
        Character *leader;
    
    public:
        SmartTeam (Character *leader);
        void add ( Character *character);
        void attack(SmartTeam *other);
        int isAlive();
        string print();
        ~SmartTeam();

        SmartTeam (SmartTeam &&other)noexcept;
        SmartTeam(const SmartTeam &other);
        SmartTeam& operator=(const SmartTeam &other);
        SmartTeam& operator=( SmartTeam &&other) noexcept;
};