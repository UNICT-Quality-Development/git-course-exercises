#include <iostream>
#include <string>
#include <cstdlib>
#ifndef RISIKO_H 
#define RISIKO_H 


class Player{
    private:
        std::string role;

    public:

        enum Color{
            RED, BLUE
        };

        Color side;
        Player(Color , std::string);

        std::string getRole()const{ return role;}
        int makeLaunch()const;
};

#endif