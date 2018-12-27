//Jonas Moros 47318379
#include "Polluter.h"
#include "Vehicals.h"
#include "AirTravel.h"
#include "NaturalGas.h"

#include <iostream>
#include <vector>
using namespace std;

int main(){
    //creates vector of pointers with type vec
    vector<Polluter*> vec;
    //adds an object to a vector containing information from input
    Polluter* pollute;
    pollute = new Vehicals();
    vec.push_back(pollute);
    pollute = new AirTravel();
    vec.push_back(pollute);
    pollute = new NaturalGas();
    vec.push_back(pollute);
    //itterates through vector until the end calculates and prints carbon footprint
    for(int i = 0; i < vec.size(); i++){
        vec[i]->getCarbonfootprint();
        vec[i]->printCarbonfootprint();
    }
}