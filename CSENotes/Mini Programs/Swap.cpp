#include <iostream>

using namespace std;

void swapPairs(string w){
    for(int i = 1; i <= w.length(); i++){
        cout << w[w.length()-i];
    }
    }



int main(){
    string word;
    cout << "Enter word: ";
    cin >> word;
    swapPairs(word);
}