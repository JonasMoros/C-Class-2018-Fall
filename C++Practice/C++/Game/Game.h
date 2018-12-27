//Jonas Moros 
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game{
    //private data members 
 private:
    string fplayer;
    string splayer;
    string monster;
    int totalp1;
    int totalp2;
    int stamina;
    int stamina2;
    int intellect;
    int intellect2;
    int attack;
    int attack2;
    int block;
    int block2;
    int mode;
    bool GameOver;
    vector <string> q;
    vector <string> answ;
    //public data members 
public: 
    Game();
    Game(string, string, string, int, int, int, int, int, int, int, int, int, int, int, bool);
    void questions();
    void questionCall();
    void statTrack();
    void Fight();
    int livePoints();
};
#endif 