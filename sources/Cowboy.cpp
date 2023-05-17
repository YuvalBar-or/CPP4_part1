#include "Cowboy.hpp"
#include "Character.hpp"
#include <string>
using namespace std;
using namespace ariel; 


Cowboy :: Cowboy (string name, const Point &location):Character(name, location, 110),bullets(6){}
void Cowboy:: shoot(Character *enemy){}
bool Cowboy :: hasboolets(){return false;}
void Cowboy :: reload(){}
