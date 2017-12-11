#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class CharacterSheet {
    private:
        int SIZE;
        int START;
        string array_[];
        string answer_;
        string question_;
        
    public:
        CharacterSheet()
        {
            SIZE = 100;
            START = 0;
            array_[SIZE];
            answer_ = " ";
            question_ = " ";
            
        }
        
        void SetQuestions(string array_[], int SIZE, int START)
        {   
            for(int i = START; i < SIZE; i++)
            {   
                question_ = array_[i];
            }
        }
        
        string GetQuestions()
        {
            return question_;
        }
        
        void SetAnswers(string array_[], int SIZE, int START)
        {   
            for(int i = START; i < SIZE; i++)
            {   
                answer_ = array_[i];
            }
        }
        
        string GetAnswers()
        {
            return answer_;
        }
        
        void Print()
        {
            cout << question_ << endl;
            cout << answer_;
        }
        
};




int main() 
{
    ifstream inFS;
    ofstream outFS;
    CharacterSheet input;
    
    const int SIZE = 100;
    string q_array_[SIZE];
    
    char answer_ = ' ';
    string player_name = " ";
    string character_name = " ";
    string hair_color = " ";
    string age = " ";
    string eye_color = " ";
    
    //Opening input.txt file
    inFS.open("testerinput.txt");
    //Opening output.txt file
    outFS.open("output.txt"); //Opens the filestream
    
    int i = 0;
    if (!inFS.is_open()) 
    { //If the file input.txt does not open...
        
        cout << "Could not open file input.txt" << endl; //...print warning for user.
        
        return 1;
    } 
            
    while(!inFS.eof()) 
    {
        getline(inFS, q_array_[i]);
        i++;
    }
    
    //First Question
    input.SetQuestions(q_array_, 1, 0);
    input.Print();
    cin >> player_name;
    outFS << "Player: " << player_name << endl;
    
    input.SetQuestions(q_array_, 2, 1);
    input.Print();
    cin >> character_name;
    outFS << "Character: " <<  character_name << endl;
    
    input.SetQuestions(q_array_, 4, 3);
    input.SetAnswers(q_array_, 8, 4);
    input.Print();
    cin >> answer_;
    
    
    //inFS.close();
    outFS.close();

};