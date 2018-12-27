//Jonas Moros 
#include "Game.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    cout << "This Text Based Video game is a quiz game assuming that your knowledge of c++ is perficient up to vectors." << endl;
    cout << "Take the Quiz and Gain Points to Fight againt the evil CPU Moster that gains power from your lack of knowledge." << endl;
    cout << "Your quest is simple answear the questions correctly and have a chance to fight and win against the beast." << endl;
    cout << "The more questions that are right the more points you recive for bonus stats giving you a quicker chance at killing the beast!" << endl;
    cout << "But failing to gain an advantage on the battlefeild of knowledge chould lean you toward being slayed by the creature." << endl;
    cout << "Choose wisely and GOOD LUCK!" << endl; 
    cout << endl;
    Game g1;
    g1.questions();
    g1.questionCall();
    g1.statTrack();
    g1.Fight();
    return 0;
}