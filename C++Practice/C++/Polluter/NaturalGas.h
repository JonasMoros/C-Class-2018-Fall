//Jonas Moros 47318379
#ifndef NATURALGAS_H
#define NATURALGAS_H
#include "Polluter.h"
#include <iostream>
using namespace std;

class NaturalGas: public Polluter{
    //private class members
    private:
        float averageAmtofNG;
        float pricePerKW;
        float NGEfactor;
        float MIYear;
        float carbon;
    //public class members
    public: 
        NaturalGas();
        virtual float getCarbonfootprint();
        virtual void printCarbonfootprint() const;
};
#endif 