#pragma once
namespace ariel {};
#include "Point.hpp"
#include <string>
using namespace std;

class Character{
    
    private: 
        Point location;
        int lives;
        string name; 

    public: 
        Character(string name, const Point &place , int lives);
        bool isAlive(); 
        double distance (Character &other);
        void hit (int number);
        string getName();
        Point getLocation();
        string print();





};