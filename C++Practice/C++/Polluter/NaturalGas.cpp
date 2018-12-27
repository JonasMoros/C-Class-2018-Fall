//Jonas Moros 47318379
#include "NaturalGas.h"
#include <iostream>
using namespace std;

NaturalGas::NaturalGas(){
    cout << endl;
    //asks for user input to calulate co2 footprint of naturalgas
    cout << "Lets Calculate Your Co2 footprint of Natural Gas use: " << endl;
    cout << "Enter Average Amount of Natural Gas Bill per Month: ";
    cin >> averageAmtofNG;
    pricePerKW = 14.14;
    NGEfactor = 120.61;
    MIYear = 12;

}
//calculates carbon foot print of natural gas
float NaturalGas::getCarbonfootprint(){
    carbon = (averageAmtofNG/pricePerKW)*pricePerKW*NGEfactor*MIYear;
    return carbon;
}
//prints carbon foot print of natural gas
void NaturalGas::printCarbonfootprint() const{
    cout << "Natural Gas: " << endl;
    cout << "Co2 Emissions in pounds = " << carbon << endl;
    cout << endl;
}