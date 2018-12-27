//Jonas Moros 
#include "Game.h"
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//constructor
Game::Game(){

    stamina = 0;
    intellect = 0;
    attack = 0;
    block = 0;
    totalp1 = 0;
    totalp2 = 0;
    GameOver = false; 
}

Game::Game(string fir, string secon, string m, int tp1, int tp2, int st, int st2, int in, int in2, int at, int at2, int b, int b2, int mo, bool go){

    fplayer = fir;
    splayer = secon;
    monster = m;
    totalp1 = tp1;
    totalp2 = tp2;
    stamina = st;
    stamina2 = st2;
    intellect = in;
    intellect2 = in2;
    attack = at;
    attack2 = at2;
    block = b;
    block2 = b2;
    mode = mo;
    GameOver = go;
}
//vector question function.
void Game::questions(){
    q.push_back("What do vectors represent?");
    answ.push_back("Dynamic arrays");

    q.push_back("In which type of storage location are the vector members stored?");
    answ.push_back("Contiguous storage locations");

    q.push_back("How many vector container properties are there in c++?");
    answ.push_back("3");

    string s;
    s += "What is the output of this program?\n\n"; 
    s +="int main ()\n";
    s+="{\n";
        s+="\tunsigned int i;\n";
        s+="\tvector<int> first;\n";
        s+="\tvector<int> second (4, 100); \n";
        s+="\tvector<int> third (second.begin(), second.end()); \n";
        s+="\tvector<int> fourth (third); \n";
        s+="\tint myints[] = {16, 2, 77, 29}; \n";
        s+="\tvector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) ); \n";
        s+="\tfor (vector<int> :: iterator it = fifth.begin(); it != fifth.end(); ++it) \n";
            s+="\t\tcout << \' \' << *it;\n";
        s+="\treturn 0;\n";
    s+="}\n";
    q.push_back(s);
    answ.push_back("16 2 77 29");
    s.clear();

    s += "What is the output of this program?\n\n";
    s+="int main ()\n";
    s+="{\n" ;
        s+="\tvector<int> myvector;\n" ;
        s+="\tint sum (0);\n";
        s+="\tmyvector.push_back (100);\n";
        s+="\tmyvector.push_back (200);\n";
        s+="\tmyvector.push_back (300);\n";
        s+="\twhile (!myvector.empty())\n";
        s+="\t{\n";
            s+="\t\tsum += myvector.back();\n";
            s+="\t\tmyvector.pop_back();\n";
        s+="\t}\n";
        s+="\tcout << sum << '';\n";
        s+="\treturn 0;\n";
    s+="}";
    q.push_back(s);
    answ.push_back("600");
    s.clear();

    s += "What is the output of this program?\n\n";
    s+="int main ()\n";
    s+="{\n";
        s+="vector<int> a (3, 0);\n";
        s+="vector<int> b (5, 0);\n";
        s+="b = a;\n";
        s+="a = vector<int>();\n";
        s+="cout << \"Size of a \" << int(a.size()) << '\\n';\n";
        s+="cout << \"Size of b \" << int(b.size()) << '\\n';\n";
        s+="return 0;\n";
    s+="}\n";
    q.push_back(s);
    answ.push_back(" Size of a 0\n Size of b 3");
    s.clear();

    s += "What is the output of this program?\n\n";
    s+="int main ()\n";
    s+="{\n";
        s+="\tvector<int> first;\n";
        s+="\tfirst.assign (7,100);\n";
        s+="\tvector<int>::iterator it;\n";
        s+="\tit=first.begin()+1;\n";
        s+="\tint myints[] = {1776,7,4};\n";
        s+="\tcout << int (first.size()) << '\\n';\n";
        s+="\treturn 0;\n";
    s+="}\n";
    q.push_back(s);
    answ.push_back("7");
    s.clear();

    s += "What is the output of this program?\n\n";
    s+="int main ()\n";
    s+="{\n";
        s+="\tvector<int> myvector (5);\n";
        s+="\tint* p = myvector.data();\n";
        s+="\t*p = 10;\n";
        s+="\t++p;\n";
        s+="\t*p = 20;\n";
        s+="\tp[2] = 100;\n";
        s+="\tfor (unsigned i = 0; i < myvector.size(); ++i)\n";
            s+="\t\tcout << ' ' << myvector[i];\n";
        s+="\treturn 0;\n";
    s+="}\n";
    q.push_back(s);
    answ.push_back("10 20 0 100 0");
    s.clear();

    q.push_back("Pick out the correct statement about vector.");
    answ.push_back("vector<int> values (5)");

    q.push_back("Which is optional in the declaration of vector?");
    answ.push_back("Number_of_elements");
}

void Game::questionCall(){

    int qsize = (int)q.size();
//prints out questions
    for (int questionLoop = 0; questionLoop < qsize; questionLoop++){
        cout << q[questionLoop] << endl;
//random ints
        int rand1 = rand() % qsize;
        int rand2 = rand() % qsize;
        int rand3 = rand() % qsize;
        do{
            rand1 = rand() % qsize;
            rand2 = rand() % qsize;
            rand3 = rand() % qsize;
        }while(rand1 != rand2 && rand2 != rand3 && rand1 != rand3);
        //prints out random answear including right  sanswear
        vector<int> ansVec;
        ansVec.push_back(questionLoop);
        ansVec.push_back(rand1);
        ansVec.push_back(rand2);
        ansVec.push_back(rand3);
        random_shuffle(ansVec.begin(), ansVec.end());

        for(int i = 0; i < ansVec.size(); i++)
            cout << answ.at(ansVec[i]) << endl;
        
        cout << "Enter your answer: ";
        string input;
        cin.clear();
        getline(cin, input);
        //sets input to lower case 
        for (int counter = 0; counter < input.size(); counter++){
            tolower(input[counter]);
        }
        
        string tempAnswer = answ[questionLoop];
        for (int counter = 0; counter < tempAnswer.size(); counter++){
            tolower(tempAnswer[counter]);
        }
//adding point to total 
        if (strcmp(input.c_str(), tempAnswer.c_str()) == 0){
            totalp1 = totalp1 + 10;
        }else{
            totalp2 = totalp2 + 10;
        }
        cout << endl;
    }
}

void Game::statTrack(){
    
    int choice;
    cout << "Your total Points = " << totalp1 << endl;
    cout << "CPU total Points = " << totalp2 << endl;
    //stats for game
    stamina = totalp1+20;
    intellect = totalp1/2;
    attack = totalp1/2;
    stamina2 = totalp2+10;
    intellect2 = totalp2/2;
    attack2 = totalp2/2;
    int temp = totalp1;
    int temp2 = totalp1;
    
    cout << "Choose to updgrade attack and block with points! Must Use all Points.";
    cout << endl;
    cout << "Total Points = " << totalp1 << endl;
    
    do{
        cout << "Remaining upgrades: " << (temp/5) << endl;
        cout << "Select 1 for add attack, " << endl;
        cout << "Select 2 for add intellect: " << endl;
        cin >> choice;
    //bonus stat options
        if(choice == 1){
            attack = attack + 2;
            temp = temp - 5;
    }
        else{
            intellect = intellect + 2;
            temp = temp - 5;
        }
    }while(temp > 0);
    
    
    for(int i = 0; i < (temp2/5); i++){
        int cpuinput = rand() % 2;

        if(cpuinput == 0)
            attack2 = attack2 + 1; 
        else
            intellect2 = intellect2 + 1;
    }

    cout << "!YOUR MONSTER STATS!" << endl;
    cout << "Total Stamina = " << stamina;
    cout << endl;
    cout << "Total Intellect = " << intellect;
    cout << endl;
    cout << "Total Attack = " << attack;
    cout << endl;
    cout << endl;

    cout << "!CPU MONSTER STATS!" << endl;
    cout << "Total Stamina = " << stamina2;
    cout << endl;
    cout << "Total Intellect = " << intellect2;
    cout << endl;
    cout << "Total Attack = " << attack2;
    cout << endl;
    sleep_until(system_clock::now() + milliseconds(250));
    cout << "LETS GET READY TO RUMMMMMBBBLLLLEEEEE!!!!" << endl;
    sleep_until(system_clock::now() + milliseconds(250));
}

void Game::Fight(){
//count down 
    int input;
    int cpuinput;
    cout << "The Fight wil being in: " << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "5" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "4" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "3" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "2" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "1" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "FIGHT!" << endl;

    int count = 0;
    
    do{
        cout << "Round: " << count + 1 << endl;
        
        sleep_until(system_clock::now() + milliseconds(500));
        
        cout << "USER MOVE" << endl;
        cout << "Choose 1 to Attack!" << endl;
        cout << "Choose 2 to Cast Spell" <<endl;
        cout << "Choose 3 to Heal! " << endl;
        cout << "Choose 4 for Special Move" << endl;
        cin >> input;
        
        sleep_until(system_clock::now() + milliseconds(500));
        //fight options and stat refreshing 
        if(input == 1){
            cout << "Attack!" << endl;
            stamina2 = stamina2 - 9;
            intellect = intellect - 3;
            attack = attack - 4;
        }

        if(input == 2){
            cout << "Spell Casted! " << endl;
            stamina2 = stamina2 - 12;
            intellect = intellect - 9;
            attack = attack - 6;
        }
        if(input == 4){
            cout << "!SPECIAL MOVE!" << endl;
           stamina2 = stamina2 - 17;
           intellect = intellect - 14;
           attack = attack - 11;
        
        }
        if(input == 3){
            cout << "Healzzz" << endl;
            intellect = intellect + 6;
            stamina = stamina + 9;
            attack = attack + 6;
            
            }
        
        
        sleep_until(system_clock::now() + milliseconds(500));
        cout << "CPU MOVE" << endl;

        cpuinput = rand() % 3;

        sleep_until(system_clock::now() + milliseconds(500));
        
        if(cpuinput == 0){
            cout << "CPU Attack!" << endl;
            stamina = stamina - 9;
            intellect2 = intellect2 - 3;
            attack2 = attack2 - 4;
        }
        
        if(cpuinput == 1){
          cout << "CPU Spell Cast!" << endl;
          stamina = stamina - 12;
          intellect2 = intellect2 - 9;
          attack2 = attack2 - 6;

        }
        if(cpuinput == 2){
            cout << "CPU Healzz!" << endl;
            intellect2 = intellect2 + 6;
            stamina2 = stamina2 + 9;
            attack2 = attack2 + 6;
        }
        
        if(cpuinput == 3){
            cout << "CPU !SPECIAL MOVE!" << endl;
            cout << "GET RDY TO TAKE A DESTROYED!!" << endl;
            stamina = stamina - 17;
            intellect2 = intellect2 - 14;
            attack2 = attack2 - 11;
            cout << "THERE IS NO ESCAPE!" << endl;
        }
        
        sleep_until(system_clock::now() + milliseconds(500));
        
        cout << "!YOUR MONSTER STATS!" << endl;
        cout << "Total Stamina = " << stamina << endl;
        cout << "Total Intellect = " << intellect << endl;
        cout << "Total Attack = " << attack << endl;
        cout << endl;
    
        cout << "!CPU MONSTER STATS!" << endl;
        cout << "Total Stamina = " << stamina2 << endl;
        cout << "Total Intellect = " << intellect2 << endl;
        cout << "Total Attack = " << attack2 << endl;
    
        count++;
        sleep_until(system_clock::now() + milliseconds(500));
    }while(stamina > 0 && stamina2 > 0);
    //winner display
    if (stamina >= stamina2 ){
        cout << endl << endl << "----CONGRATS!!----" << endl;
        cout << "You beat the coding monster!" << endl;
        cout << "------------------" << endl << endl;
    }else{
        cout << endl << endl << "----Oh No!!----" << endl;
        cout << "You lost to the coding monster!" << endl;
        cout << "---------------" << endl << endl;
    }
}

int Game::livePoints(){
    return totalp1;
}
