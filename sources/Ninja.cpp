#include "Ninja.hpp"
#include "Character.hpp"
#include "Point.hpp"
#include <string>

Ninja :: Ninja (string name ,const Point &location, int lives, int speed): 
Character(name, location, lives), speed(speed) {}
void Ninja::move(const Character *enemy) {}
void Ninja::slash(Character *enemy) {}
string Ninja :: getName(){return "";}
Point Ninja:: getLocation(){return Point(0,0);}
