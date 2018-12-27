//Jonas Moros 47318379
#include "AirTravel.h"
#include <iostream>
using namespace std;

AirTravel::AirTravel(){
    cout << endl;
    //ask for user input to calculate co2 footprint from airtravel
    cout << "Lets Calculate Your Co2 footprint using AirTravel: " << endl;
    cout << "Enter Miles Travel by Air per year: "; 
    cin >> airmilesperYear;
    airmilesperYear = airmilesperYear * 52;
    AvgEmiperMile = 223;
    PumpFactor = 1.2;
    atmostFactor = 1.9;
    GtoPcov = .0022;
}
//calculated carbon footprint of air travel
float AirTravel::getCarbonfootprint(){
    carbon = airmilesperYear*(AvgEmiperMile*PumpFactor*atmostFactor)*GtoPcov;
    return carbon;
}
//prints carbon footprint calculated 
void AirTravel::printCarbonfootprint() const{
    cout << "AirTravel: " << endl;
    cout << "Co2 Emissions in pounds = " << carbon << endl;
    cout << endl;
}


