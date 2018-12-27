/*
*recursion is a problem solving method.
*a function calling itself 
*the idea is to break a problem down into smaller versions of itself 
* 2 part:
* -base case: directly solvable versions
*-Recursive case: smaller problem but same type
*/
#include <iostream>
using namespace std;

int sumNumbers(int val){
	//base case
	if(val==1){
		return 1;}
	else{
		//recursive case
		return val + sumNumbers(val-1);}
}

int main(){
	int theNumber =10;
	int answer = sumNumbers(theNumber);
	cout << "The Answer is " << answer << endl;
	return 0;
}