#ifndef VEHICALS_H
#define VEHICALS_H
#include "Polluter.h"
#include <iostream>

using namespace std;


class Vehicals: public Polluter{
    //private class members
    private:
        float milesPerWeek;
        float weeksDrivenperYear;
        float vehicalFuelE;
        float carbon;
        float idofCo2perGallon;
        float otherGasses;
    //public class members
    public: 
        Vehicals();
        virtual float getCarbonfootprint();
        virtual void printCarbonfootprint() const;
        






};
#endif