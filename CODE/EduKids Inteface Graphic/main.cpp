#include <bits/stdc++.h>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
using namespace std;


int contador_coint=0;
int main()
{
    Sergio::Game(SCREEN_WIDTH,SCREEN_HEIGHT,"EduKids");
    ofstream file("Coin.txt");
    file<<contador_coint;
    return 0;
}
