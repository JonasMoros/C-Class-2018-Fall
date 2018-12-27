#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class SocialNetwork{
    //private data members
    private:
    ifstream infile; 
    vector<int>* network_data;
    int** similarity_matrix;
    int size; 

    //public data members 
    public:
    SocialNetwork();
    int getSize();
    void int_matrix();
    void readFile();
    void display();
    void calc_similarity_scores();
    int num_in_common_between_vectors(vector<int> a, vector<int> b);
    int recommend(int userID);
    bool alreadyFriends(int userID1, int userID2);


    
};