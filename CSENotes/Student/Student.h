#include <string>

using namespace std;



class Student
{
private: 
    string name;
    int t1;
    int t2;
    int t3;


public:

//mutators aka setters 
void setName(string newName);
void setT1(int grade);
void setT2(int grade);
void setT3(int grade);

//accessors aka getters
string getName();
int getT1();
int getT2();
int getT3();

//member functions 
double getAverage();

};

