#include "Friends.h"

using namespace std;


//constructor that promps user to enter in file that contains data and then starts creation of data set after finding size
SocialNetwork::SocialNetwork(){
    string filename;
    cout << "Enter file name: ";
    cin >> filename;
     infile.open(filename.c_str());
    while(!infile.good()){
        cout << "Couldnt find file. !Wroung File! Please try entering another file!" << endl; 
        cin >> filename;
        infile.open(filename.c_str()); 
    }
    infile >> size;
    network_data = new vector<int>[size];  
    int_matrix();
}

//return the size of the data set
int SocialNetwork::getSize(){
    return size;

}
 
//the function initiallizes the similarity matrix
void SocialNetwork::int_matrix(){
        similarity_matrix = new int*[size];
        for (int i=0; i < size; i++)
        similarity_matrix[i]= new int[size];
        int j;
        for (int i=0; i < size; i++){ 
        for ( j =0; j < size; j++){
            similarity_matrix[i][j] = 0;}
          }

}   

    //reads file and sets placement for friends
    void SocialNetwork::readFile(){
        while(infile.good()){
            int v;
            int u;
            infile >> u;
            infile >> v;
            network_data[u].push_back(v);//pushes v into u in the vector 
            network_data[v].push_back(u);//pushes u into v in the vector
        }
    }
    //displays data 
    void SocialNetwork::display(){
        cout << "Data From Network" << endl;
        for(int i = 0; i < size; i++){
            cout << i << " : [";
        for(int t = 0; t < network_data[i].size()-1; t++){
                cout << network_data[i].at(t) << ", ";
        }
        cout << network_data[i].at(network_data[i].size()-1) << "]" << endl; 
        }
    }
         
    // cout << "SIMILARITY DATA:" << endl;
    // for(int i = 0; i < size; i++)
    // {
    //     cout << i << " : [";
    //     for(int j = 0; j < size-1; j++)
    //     {
    //         cout << similarity_matrix[i][j] << ", ";
    //     }
    //     cout << similarity_matrix[i][size-1] << "]" << endl;
    // }
    // }
    //fills array with data based on position and number of common friends
    void SocialNetwork::calc_similarity_scores(){
        for(int i = 0; i < size; i++){
            for(int j = i; j < size; j++){
                similarity_matrix[i][j] = num_in_common_between_vectors(network_data[i], network_data[j]);
                similarity_matrix[j][i] = num_in_common_between_vectors(network_data[i], network_data[j]);
                
            }

        }

    }
    //counts up number in common friends
     int SocialNetwork::num_in_common_between_vectors(vector<int> a,vector<int> b){
        int nums_in_common = 0;
        for(int i = 0; i < a.size(); i++){//nested forloup to compare and extracte the common elements between 2 vectors
            for(int j = 0; j < b.size(); j++){
                if(a.at(i) == b.at(j)){
                    nums_in_common++;//this counter is here to add up all the common elements that both vectors have 
                }
            }
        }

                    return nums_in_common; //returns how many common elements both vectors have
    }
    //recommends the user without recommending themselves and someone they are already friends with a userIDs that they should be friends with
    int SocialNetwork::recommend(int userID){
        int amount = -1;
        int index;
        for(int i = 0; i < size; i++){
            if(similarity_matrix[userID][i] > amount && (i != userID) && (!alreadyFriends(userID, i))){
                amount = similarity_matrix[userID][i];
                index = i;
            }
        }
        return index;
    }
    //functions that makes sure that the userID does not recommed UserIDs that are already friends. 
    bool SocialNetwork::alreadyFriends(int userID1, int userID2){
        bool alreadyFriends = false;
        for(int i =0; i < network_data[userID1].size(); i++){
            if(network_data[userID1].at(i) == userID2){
                alreadyFriends = true; 
            }
        }
        return alreadyFriends;
    }

    


