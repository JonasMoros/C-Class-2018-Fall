#include "Friends.h"
#include <iostream> 
#include <fstream>
#include <string> 
#include <vector>
#include <algorithm>

using namespace std;
int main(){
SocialNetwork theData;
theData.readFile();
theData.calc_similarity_scores();
//theData.display();

// for(int i = 0; i < theData.getSize(); i++){
//     cout << i << ": " << theData.recommend(i) << endl;

// }
//While loup that proms user to enter user-ID to check for friends until user enter no
bool run = true;
while(run){
int id;
cout << "Enter User-ID from 0 to " << theData.getSize()-1 << ": ";f
cin >> id;
while(id < 0 || id >= theData.getSize()){
 cout << "ID NUMBER is not in range please enter a number between 0 and " << theData.getSize()-1 << ": ";
 cout << endl;
 cin >> id;
}
//shows suggested user ids that user id entered should be friends with
cout << "Suggested friend for User-ID " << id << " is user: " << theData.recommend(id) << endl;


cout << " (Yes/No) to continue?" << endl;
string contin;
cin >> contin; 
//transforms string contin to lower case
transform(contin.begin(), contin.end(), contin.begin(), ::tolower);

if(contin == "no"){
    run = false;
                }
}
return 0;
}