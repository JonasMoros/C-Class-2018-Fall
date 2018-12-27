#include <iostream>
#include <vector>
#include <string>
#include <fstream> 
using namespace std; 

 void readData(ifstream& in, vector<string>& data){
     string temp; 
     while(in.good()){
         getline(in, temp);
         data.push_back(temp);
     }

 }


int main(){
    ifstream input ("coolPeople.txt");
    if(!input) return -1; 

    vector<string> names;
    readData(input, names);
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << endl; 
    }

    input.close();
    return 0; 

}