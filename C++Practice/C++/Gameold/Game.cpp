#include "Game.h"

using namespace std;

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

    int qsize = q.size();

    for (int questionLoop = 0; questionLoop < qsize; questionLoop++){
        cout << q[questionLoop] << endl;

        int rand1 = rand() % qsize;
        int rand2 = rand() % qsize;
        int rand3 = rand() % qsize;
        do{
            rand1 = rand() % qsize;
            rand2 = rand() % qsize;
            rand3 = rand() % qsize;
        }while(rand1 != rand2 && rand2 != rand3 && rand1 != rand3);

        vector<int> ansVec;
        ansVec.push_back(questionLoop);
        ansVec.push_back(rand1);
        ansVec.push_back(rand2);
        ansVec.push_back(rand3);
        random_shuffle(ansVec.begin(), ansVec.end());

        for(int i = 0; i < ansVec.size(); i++)
            cout << answ.at(ansVec[i]) << endl;
        
        cout << "Enter your answer: " << endl;
        string input;
        cin.clear();
        cin >> input;
        for(int counter = 0; counter < input.size(); counter++){
            putchar(tolower(input[counter]));
        }
        string tempAnswer = answ[questionLoop];

        for(int i = 0; i < tempAnswer.size(); i++){
            putchar(tolower(tempAnswer[i]));
        }

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
    stamina = totalp1+10;
    intellect = totalp1+2;
    attack = totalp1/2;
    block = totalp1/2;
    stamina2 = totalp2+10;
    intellect2 = totalp2+2;
    attack2 = totalp2/2;
    block2 = totalp2/2;
    cout << "Choose to updgrade attack and block with points! Must Use all Points.";
    cout << endl;
    cout << "Total Points = " << totalp1 << endl;
    for(int i = 0; i < totalp1; i++){
        cout << "Select 1 for add attack: ";
        cout << endl;
        cout << "Select 2 for add block: ";
        cout << endl;
        cin >> choice;
        if(choice == 1){
            attack = attack + 1;
        }
        if(choice == 2){
            block = block + 1;
        }
        else{
            cout << "Select 1 for add attack: ";
            cout << endl;
            cout << "Select 2 for add block: ";
            cout << endl;
            cin >> choice;
        }
    }
    for(int i = 0; i < totalp2; i++){
        int cpuinput = rand() % 2 + 1;

        if(cpuinput == 1){
            attack2 = attack2 + 1; 
        }
        if(cpuinput == 2){
            block2 = block2 + 1;
        }
    }

    cout << "!YOUR MONSTER STATS!" << endl;
    cout << "Total Stamina = " << stamina;
    cout << endl;
    cout << "Total Intellect = " << intellect;
    cout << endl;
    cout << "Total Attack = " << attack;
    cout << endl;
    cout << "Total Block = " << block;
    cout << endl;
    cout << endl;

    
    cout << "!CPU MONSTER STATS!" << endl;
    cout << "Total Stamina = " << stamina2;
    cout << endl;
    cout << "Total Intellect = " << intellect2;
    cout << endl;
    cout << "Total Attack = " << attack2;
    cout << endl;
    cout << "Total Block = " << block2;
    cout << endl;

    cout << "LETS GET READY TO RUMMMMMBBBLLLLEEEEE!!!!" << endl;

    
}

void Game::Fight(){

    int input;
    int cpuinput;
    cout << "The Fight wil being in: " << endl;
    cout << "5" << endl;
    cout << "4" << endl;
    cout << "3" << endl;
    cout << "2" << endl;
    cout << "1" << endl;
    cout << "FIGHT!" << endl;

    do{

        int count = 0;
        cout << "Round: " << count+1 << endl;
        cout << "USER MOVE" << endl;
        cout << "Choose 1 to Attack!" << endl;
        cout << "Choose 2 to Block! " << endl;
        cout << "Choose 3 for Special Move" << endl;
        cin >> input;

        if(input == 1){
            cout << "Attack!" << endl;
            stamina2 = stamina2 - attack;
            intellect = intellect / 2;
        }

        if(input == 2){
            cout << "Block! " << endl;
            stamina = stamina - (attack2/2);
        }

        if(input == 3){
            cout << "!SPECIAL MOVE!" << endl;
            attack = attack * 2;
            stamina2 = stamina2 - attack;
            intellect = intellect / 2;
            intellect++;
            stamina++;
        }

        cout << "CPU MOVE" << endl;

        cpuinput = rand() % 3 + 1;

        if(cpuinput == 1){
            cout << "CPU Attack!" << endl;
            stamina = stamina - attack2;
            intellect2 = intellect2 / 2;
            cout << "YOU WILL NOT LEARN ANYTHING!" << endl;
        }

        if(cpuinput == 2){
            cout << "CPU Block! " << endl;
            stamina2 = stamina2 - (attack/2);
            cout << "I WILL BLOCK THE c++ IN YOU HEAD" << endl;
        }

        if(cpuinput == 3){
            cout << "CPU !SPECIAL MOVE!" << endl;
            cout << "GET RDY TO TAKE A DESTROYED!!" << endl;
            attack2 = attack2 * 2;
            stamina = stamina - attack2;
            intellect2 = intellect2 / 2;
            intellect2++;
            stamina2++;
            cout << "THERE IS NO ESCAPE!" << endl;
        }

        cout << "!YOUR MONSTER STATS!" << endl;
        cout << "Total Stamina = " << stamina << endl;
        cout << "Total Intellect = " << intellect << endl;
        cout << "Total Attack = " << attack << endl;
        cout << "Total Block = " << block << endl;
        cout << endl;
    
        cout << "!CPU MONSTER STATS!" << endl;
        cout << "Total Stamina = " << stamina2 << endl;
        cout << "Total Intellect = " << intellect2 << endl;
        cout << "Total Attack = " << attack2 << endl;
        cout << "Total Block = " << block2 << endl;

        count++;

    }while(stamina > 0 || stamina2 > 0);
}

int Game::livePoints(){
    return totalp1;
}
