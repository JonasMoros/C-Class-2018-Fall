#include <iostream>

using namespace std;

void repeat(string w,int x){
for(int i = 0; i < x; i++){
    cout << w << ",";
}

}

int main(){
int count;
string word;
cout << "Enter a word: ";
cin >> word;
cout << "Enter number of times to repeat word: ";
cin >> count;
repeat(word,count);



return 0;
}