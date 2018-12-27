#include <iostream>
#include <string>
using namespace std;

double dMoney(double& amountofmoney, int& nickels, int& dimes, int& quarters, int& dollars){
double usermoney;
usermoney = 0.0;
//double amountofmoney = am;
//amountofmoney = 0.0;
while(usermoney < amountofmoney){
	char input;
    cout << "Payment owed: " << amountofmoney - usermoney << endl;
	cout << "Press q to deposit quarters." << endl;
	cout << "Press n to deposit nickels." << endl;
	cout << "Press d to deposit dimes." << endl;
	cout << "Press o to deposit one dollar." << endl;
	cin >> input;
if( input == 'q'){
	usermoney += .25;
	quarters++;
}
else if( input == 'n'){
	usermoney += .05;
	nickels++;
}
else if( input == 'd'){
	usermoney += .10;
	dimes++;
}
else if ( input == 'o'){
	usermoney += 1.0;
	dollars++;
}
cout << "Your Balance: $" << usermoney << endl;


}
return usermoney;
}

void rMoney(int quarters, int nickels, int dimes, int dollars){
cout << "Remaining Money in Machine" << endl;
cout << "Quarters: " << quarters << endl;
cout << "Dimes: " << dimes << endl;
cout << "Nickels: " << nickels << endl;
cout << "Dollars: " << dollars << endl;
}


void tMoney(int dollars, int quarters, int nickels, int dimes){
double money = (1.0 * dollars) + (.25 * quarters) + ( .10 * dimes) + ( .05 * nickels);
cout << "Total Money = $" << money << endl; 
}



 
int main(){

int dimes;
int quarters;
int nickels;
int dollars = 0; 
cout << "Enter amount of nickels." << endl;
cin >> nickels;
cout << "Enter amount of dimes." << endl;
cin >> dimes;
cout << "Enter amount of quarters." << endl;
cin >> quarters;
cout << endl;
cout << quarters << " Quarters" << " " << dimes << " Dimes" << " " << nickels << " Nickels" << " " << endl;
cout << endl;

char inputofuser;
double amountofmoney = 0.0;
double usermoney = 0.0;
double change = 0.0;

while(true){
cout << "Vending Menu" << endl;
cout << "Type: s for Sprite $1" << endl;
cout << "Type: c for Coke 1.25" << endl;
cout << "Type: f for Fanta 1.35" << endl;
cout << "Type: t for Tea 1.40" << endl;
cout << "Type: m for Mountain Dew 1.50" << endl;
cout << "Type: q to quit!" << endl;

cin >> inputofuser;
if(inputofuser == 'q'){
	break;
}
else if( inputofuser == 's'){
	amountofmoney = 1;
}
else if( inputofuser == 'c'){
	amountofmoney = 1.25;

}
else if( inputofuser == 'f'){
	amountofmoney = 1.35;
}
else if( inputofuser == 't'){
	amountofmoney = 1.40;
}
else if( inputofuser == 'm'){
	amountofmoney = 1.50;
}
else{
	cout << "Invalid Entry Please Try Again!" << endl;
	cin >> inputofuser;
}
cout << "You have choosen " << inputofuser << " that will be " << "$" << amountofmoney << endl;


usermoney = dMoney(amountofmoney, nickels, dimes, quarters, dollars);





change = usermoney - amountofmoney;
int changedue;
int numQ = 0;
int numN = 0;
int numD = 0;
changedue = change * 100;
cout << "Final Change " << changedue / 100.0 << endl;

if( changedue != 0){
 numQ = changedue / 25;

if(numQ > quarters){
numQ = quarters;	
}
changedue -= 25 * numQ;
 numD = changedue / 10;
if(numD > dimes){
numD = dimes;	
}
changedue -= 10 * numD;	
 numN = changedue / 5;
if(numN > nickels){
numN = nickels;	
}
changedue -= 5 * numN;
}
cout << "!!PLEASE TAKE CHANGE!!" << endl;
cout << numQ << " Quarters" << endl;
cout << numD << " Dimes" << endl;
cout << numN << " Nickels" << endl;
quarters -= numQ;
dimes -= numD;
nickels -= numN;
cout << "!!TAKE CHANGE IN MACHINE!!" << endl;

if(changedue > 0){
cout << "!!RETRIEVE MONEY FROM ATTENDANT!! Remaining change of: " << changedue/100.0 << endl;
}

	

}
cout << "Goodbye!" << endl;

rMoney(quarters,nickels,dimes,dollars);


tMoney(dollars,quarters,nickels,dimes);

}
