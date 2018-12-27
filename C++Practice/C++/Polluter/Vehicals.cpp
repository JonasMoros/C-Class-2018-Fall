//Jonas Moros 47318379
#include "Polluter.h"
#include "Vehicals.h"
#include <iostream>
using namespace std;

Vehicals::Vehicals(){
    cout << endl;
    //ask for user input to calculate carbon footprint
    cout << "Lets Calculate Your Co2 Footprint of your vehical: " << endl;
    cout << "Enter number of miles driven per week: ";
    cin >> milesPerWeek;
    cout << "Enter number of weeks driven per year (if ALL year enter 52): ";
    cin >> weeksDrivenperYear;
    cout << "Enter the MPG of your vehical: ";
    cin >> vehicalFuelE;
    // vehicalFuelE = vehicalFuelE/100;
    idofCo2perGallon = 19.4;
    otherGasses = 100.0/95.0;
}
//calculates carbon footprint 
float Vehicals::getCarbonfootprint(){
    carbon = ((milesPerWeek*weeksDrivenperYear)/((vehicalFuelE)*(idofCo2perGallon)*(otherGasses)));
    return carbon;
}
//prints carbon footprint 
void Vehicals::printCarbonfootprint() const{
    cout << "Vehicals: " << endl;
    cout << "Co2 Emissions in pounds = " << carbon << endl;
    cout << endl;
}






