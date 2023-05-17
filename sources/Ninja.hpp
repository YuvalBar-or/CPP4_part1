#pragma once
#include "Character.hpp"
#include <string>
namespace ariel{};

class Ninja: public Character{
    private:
        int speed;
    
    public:
        Ninja (string name ,const Point &location, int lives, int speed);
        void move(const Character *enemy);
        void slash(Character *enemy);
        string getName();
        Point getLocation();

};