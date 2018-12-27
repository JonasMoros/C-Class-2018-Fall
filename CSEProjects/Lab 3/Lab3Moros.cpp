#include <iostream>
#include <vector>
#include <string>
#include <fstream> 
#include <algorithm>
using namespace std; 
//function 1
void readTitle(ifstream& in, vector<string>& titles, vector<string>& authors, vector<string>& publishers, vector<int>& months , vector<int>& days, vector<int>& years, vector<string>& cats){
//function to read file information into specific sting vectors 
string title;
string author;
string publisher;
string day;
string month;
string year;
string category;
int bookday;
int bookmonth;
int bookyear; 

while(in.good()){
    getline(in, title, '\t');//reads information on line and stores in string vector informations stored up to TAB
     titles.push_back(title);
    

    getline(in, author, '\t');//gets authors name adds to vector string
    authors.push_back(author);
    
    getline(in, publisher, '\t');//gets publisher adds to vector string 
    publishers.push_back(publisher);


    getline(in, month, '/');//gets book month and adds to vector
    int bookmonth = atoi(month.c_str());//converts to int 
    months.push_back(bookmonth);

    getline(in, day, '/');
    int bookday = atoi(day.c_str());
    days.push_back(bookday);

    getline(in, year, '\t');
    int bookyear = atoi(year.c_str());
    years.push_back(bookyear);

    getline(in, category, '\n');
    cats.push_back(category);


}
}
//function2
void yearRange(vector<int>& yearRange, vector<int>& dayRange, vector<int>& monthRange, vector<string>& titleRange, vector<string>& authorRange){
    //displays number one books in year range selected by user 
    int syear;
    int eyear;
    int count = 0;
    //promps user to enter information
    cout << "Type in two years to diplay number one books in that time frame." << endl;
    cout << "Enter beginning year: ";
    cin >> syear;
    cout << "Enter ending year: ";
    cin >> eyear; 
    cout << "All Titles between " << syear << " and " << eyear << endl;
    for(int i = 0; i < yearRange.size(); i++){
        //for loup that itterats through year vector 
        if(yearRange.at(i) >= syear && yearRange.at(i) <= eyear){
            cout << titleRange.at(i) << ", by " << authorRange.at(i) << " " << "(" << dayRange.at(i) << "/" << monthRange.at(i) << "/" << yearRange.at(i) << ")" << endl; 
            cout << endl;
            count++;
        }

    }

        if(count == 0){
            cout << endl;
            cout << "Books In Year Range Not Found!" << endl;
            cout << endl;
            
        }
}
//function 3
void monthyearRange(vector<int>& moRange, vector<int>& dRange, vector<int>& yRange, vector<string>& tRange, vector<string>& aRange){
    int year;
    int month;
    int count = 0;
    cout << "Enter month (as a number 1-12): ";
    cin >> month;
    while(month > 12 || month < 1){//while loup for incase user enters non valid number 
        cout << "Month number not valid!! Please try again." << endl;
        cout << "Enter month (as a number 1-12): ";
        cin >> month;
    }
    cout << "Enter year: ";
    cin >> year;
    cout << "All titles in month " << month << " of " << year << endl;
    cout << endl;
    for(int i = 0; i < yRange.size(); i++){
        if(moRange.at(i) == month && yRange.at(i) == year){// if user input is equal to vector 
            count++;                                        //prints out books of inputed month and year 
            cout << tRange.at(i) << ", by " << aRange.at(i) << " " << "(" << moRange.at(i) << "/" << dRange.at(i) << "/" << yRange.at(i) << ")" << endl;
            cout << endl;
        }
    }
        if(count == 0){
            cout << endl;
            cout << "Books Not Found!" << endl;
            cout << endl;
            
        }

}
//function 4
void searchAuthor(vector<int>& monthV, vector<int>& dayV, vector<int>& yearV, vector<string>& titleV, vector<string>& authorV){
string author;
int count = 0;
cin.ignore();//ignors new line character
cout << "Enter an author's name (or part of a name): ";
cout << endl;
getline(cin,author); //retives whole line 
transform(author.begin() ,author.end() ,author.begin(), ::tolower);//converts string to all lowercase
for(int i = 0; i < authorV.size(); i++){
string x = authorV.at(i);//creates dummy variable so acctual vector is not changed
transform(x.begin(), x.end(), x.begin(), ::tolower);//converts dummy variable to lower case 
if(x.find(author) != string::npos){//if does not equal null
    cout << titleV.at(i) << ", by " << authorV.at(i) << " " << "(" << monthV.at(i) << "/" << dayV.at(i) << "/" << yearV.at(i) << ")" << endl;
    cout << endl;
    count++;
}

}
  if(count == 0){
            cout << endl;
            cout << "Author Not Found!" << endl;
            cout << endl;
            
        }

}
//function 5S
void searchTitle(vector<int>& monthVector, vector<int>& dayVector, vector<int>& yearVector, vector<string>& titleVector, vector<string>& authorVector){
string title;
int count = 0;
cin.ignore();
cout << "Enter a title (or part of a title): ";
getline(cin, title);
transform(title.begin(), title.end(), title.begin(), ::tolower);//changes user input to lower case after input is taken in
for(int i = 0; i < titleVector.size(); i++){
    string t = titleVector.at(i);//creates dummy varriable so acctual vector is not changed 
    transform(t.begin(), t.end(), t.begin(), ::tolower);//converts dummy variable to lower case
    if(t.find(title) != string::npos){
    cout << titleVector.at(i) << ", by " << authorVector.at(i) << " " << "(" << monthVector.at(i) << "/" << dayVector.at(i) << "/" << yearVector.at(i) << ")" << endl;
    cout << endl;
    count++;
    }
}
      if(count == 0){
            cout << endl;
            cout << "Title Not Found!" << endl;
            cout << endl;
           
        }
}





int main(){
    ifstream input("Bookss.txt");//opens file 
    if(!input) return -1;
    vector<string> title;
    vector<string> author;
    vector<string> publisher;
    vector<string> cat;
    vector<int> month;
    vector<int> day;
    vector<int> year;
    string choice;
    bool going = true;   
    //calls function to read information on .txt into vectors
    readTitle(input, title, author, publisher, month, day, year, cat);
    //promps user for input 
    while(going){
    cout << "What would you like to do?" << endl;
    cout << "1: Look up year range" << endl;
    cout << "2: Look up month/year" << endl;
    cout << "3: Search for author" << endl;
    cout << "4: Search for title" << endl;
    cout << "q: QUIT!!" << endl;
    cin >> choice;//input of user
    //depending on input of user code exsicuts specific funciton
    if(choice == "1"){
    //calls function
    yearRange(year, month, day, title, author);
    }
    else if(choice == "2"){
        monthyearRange(month, day, year, title, author);
    }
    else if(choice == "3"){
        searchAuthor(month, day, year, title, author); 

    }
    else if(choice == "4"){
        searchTitle(month, day, year, title, author);
    }
    else if( choice == "q" || choice == "Q"){
        going = false; 
    }
    else{
        cout << endl;
        cout << "Invalid Entry Please Try Again!" << endl;
        cout << endl;
    }
    }
    input.close();//closes file
    return 0;
}