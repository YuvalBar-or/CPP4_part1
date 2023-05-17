#include "Team.hpp"
#include "Character.hpp"
#include <vector>
using namespace std; 
using namespace ariel;

Team:: Team (Character *leader): leader(leader){team.push_back(leader);}
Team::Team(Team &&other)noexcept {}
Team::Team(const Team &other) : leader(other.leader) {}
void Team :: add ( Character *character){}
void Team::attack(Team *other) {}
int Team :: stillAlive(){return 0;}
string Team :: print(){return "";}
Team::~Team() {}
Team :: Team(){}
Team &Team::operator=(const Team &other){return *this;}
Team &Team::operator=( Team &&other) noexcept{return *this;}


