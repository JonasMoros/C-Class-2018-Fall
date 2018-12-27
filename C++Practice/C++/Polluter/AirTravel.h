//Jonas Moros 47318379
#ifndef AIRTRAVEL_H
#define AIRTRAVEL_H
#include "Polluter.h"
#include <iostream>
using namespace std;

class AirTravel: public Polluter{
    //private class members
    private:
        float airmilesperYear;
        float AvgEmiperMile;
        float PumpFactor;
        float atmostFactor;
        float GtoPcov;
        float carbon;
    //public class members
    public:
        AirTravel();
        virtual float getCarbonfootprint();
        virtual void printCarbonfootprint() const;

};
#endif