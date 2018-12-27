//Jonas Moros 47318379
#ifndef POLLUTER_H
#define POLLUTER_H

#include <iostream>

using namespace std;
//partent class 
class Polluter{
//public functions
public:
virtual float getCarbonfootprint() = 0; 
virtual void printCarbonfootprint() const = 0;
};
#endif 