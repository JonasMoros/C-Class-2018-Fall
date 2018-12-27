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
int search(int d[], int first, int last, int searchKey){
	int middle = (first + last)/2;
	if(d[middle] == searchKey){
	return middle;}
	else if (d[middle] > searchKey){
	return search(d, frist, middle - 1, searchKey);}
	else{ 
	return search(d, middle+1, last, searchKey);}
		
	
}

int main(){
	int theNumber =10;
	int answer = sumNumbers(theNumber);
	cout << "The Answer is " << answer << endl;
	int theArray[10] = {2, 3, 5, 6, 7, 8, 9, 10, 15, 18, 20};
	for(int i = 0; i < 10; i++)
		cout << theArray[i] << endl;
	int loc = search(theArray, 0, 9, 18);
	cout << "18 is located at " << loc << endl;

	return 0;
}