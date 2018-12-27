#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void bestScore(ofstream& out,ifstream& in, vector<string>& n, vector<int>& s){
int students;
int scorePer = 0;
//int temp = 0;
//bool run = true;
string word;
cout << "How many entries will you make? ";
cin >> students;
for(int i = 0; i < students; i++){
    cout << "Enter Students Name: ";
    cin >> word;
    n.push_back(word);
    cout << "Enter Students Grade: ";
    cin >> scorePer;
    s.push_back(scorePer);


for(int j = 0; j < n.size(); j++){
    out << n[j] << ": "<< s[j] << endl;

}


}


int main(){
ifstream infile;
ofstream output;
infile.open("Scores.txt",ios::app);
output.open("Scores.txt",ios::app);

vector<string> name;
vector<int> scores;
bestScore(output,infile,name,scores);


output.close();
infile.close();

    return 0;
}