#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class CharacterSheet {
    private:
        
};


int main() 
{
    ifstream inFS;
    ofstream outFS;
    
    const int SIZE = 100;
    string q_array_[SIZE];
    
    char answer_ = ' ';
    string player_name = " ";
    string character_name = " ";
    string hair_color = " ";
    string age = " ";
    string eye_color = " ";
    int attck = 0;
    int armor = 0;
    int intellect = 0;
    
    inFS.open("input.txt");
    //Opening output HTML file
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
    
    
    cout << q_array_[0] << endl;
    cin >> player_name;
    outFS << "PLAYER: " << player_name << endl;
    cout << endl;
    
    cout << q_array_[1] << endl;
    cin >> character_name;
    outFS << "CHARACTER: " << character_name << endl;
    cout << endl;
    
    cout << q_array_[3] << endl;
    cout << "A. " << q_array_[4] << endl;
    cout << "B. " << q_array_[5] << endl;
    cout << "C. " << q_array_[6] << endl;
    
    cin >> answer_;
    
//Can turn vvvv into a function for answer generating
    
    switch(answer_)
    {
        case 'A':
        case 'a':
            outFS << "Gender: " << q_array_[4] << endl; 
            break;
        
        case 'B':
        case 'b':
            outFS << "Gender: " << q_array_[5] << endl; 
            break;
        
        case 'C':
        case 'c':
            outFS << "Gender: " << q_array_[6] << endl;
            attck = attck + 3;
            break;
            
        default:
            cout << "Not a valid input. Re-enter" << endl;
            break;
    }
    
    cout << q_array_[8] << endl;
    cin >> age;
    outFS << "Age: " << age << endl;
    
    cout << q_array_[9] << endl;
    cin >> hair_color;
    outFS << "Hair Color: " << hair_color << endl;

    cout << q_array_[10] << endl;
    cin >> eye_color;
    outFS << "Eye Color: " << eye_color << endl;
    
    cout << q_array_[12] << endl;
    cout << "A. " << q_array_[13] << endl;
    cout << "B. " << q_array_[14] << endl;
    cout << "C. " << q_array_[15] << endl;
    cout << "D. " << q_array_[16] << endl;
    cout << "E. " << q_array_[17] << endl;
    cout << "F. " << q_array_[18] << endl;
    cout << "G. " << q_array_[19] << endl;
    
    cin >> answer_;
    
    switch(answer_)
    {
        case 'A':
        case 'a':
            outFS << "Race: " << q_array_[13] << endl;
            attck = attck;
            armor = armor;
            intellect = intellect;
            break;
        
        case 'B':
        case 'b':
            outFS << "Race: " << q_array_[14] << endl; 
            attck = attck + 1;
            armor = armor;
            intellect = intellect + 2;
            break;
        
        case 'C':
        case 'c':
            outFS << "Race: " << q_array_[15] << endl; 
            attck = attck;
            armor = armor + 2;
            intellect = intellect + 1;
            break;
            
        case 'D':
        case 'd':
            outFS << "Race: " << q_array_[16] << endl; 
            attck = attck + 3;
            armor = armor + 3;
            intellect = intellect;
            break;
        
        case 'E':
        case 'e':
            outFS << "Race: " << q_array_[17] << endl; 
            attck = attck + 3;
            armor = armor + 5;
            intellect = intellect + 3;
            break;
        
        case 'F':
        case 'f':
            outFS << "Race: " << q_array_[18] << endl;
            attck = attck;
            armor = armor + 3;
            intellect = intellect;
            break;
            
        case 'G':
        case 'g':
            outFS << "Race: " << q_array_[19] << endl; 
            attck = attck + 1;
            armor = armor + 2;
            intellect = intellect + 1;
            break;
            
        default:
            cout << "Not a valid input. Re-enter" << endl;
            break;
    }
    
    cout << q_array_[21] << endl;
    cout << "A. " << q_array_[22] << endl;
    cout << "B. " << q_array_[23] << endl;
    cout << "C. " << q_array_[24] << endl;
    cout << "D. " << q_array_[25] << endl;
    cout << "E. " << q_array_[26] << endl;
    cout << "F. " << q_array_[27] << endl;
    cout << "G. " << q_array_[28] << endl;
    cout << "H. " << q_array_[29] << endl;
    
    cin >> answer_;
    
    switch(answer_)
    {
        case 'A':
        case 'a':
            outFS << "Class: " << q_array_[22] << endl;
            attck = attck + 3;
            armor = armor + 3;
            intellect = intellect;
            break;
        
        case 'B':
        case 'b':
            outFS << "Class: " << q_array_[23] << endl; 
            attck = attck;
            armor = armor;
            intellect = intellect + 2;
            break;
        
        case 'C':
        case 'c':
            outFS << "Class: " << q_array_[24] << endl;
            attck = attck + 3;
            armor = armor + 2;
            intellect = intellect + 3;
            break;
            
        case 'D':
        case 'd':
            outFS << "Class: " << q_array_[25] << endl; 
            break;
        
        case 'E':
        case 'e':
            outFS << "Class: " << q_array_[26] << endl; 
            break;
        
        case 'F':
        case 'f':
            outFS << "Class: " << q_array_[27] << endl; 
            break;
            
        case 'G':
        case 'g':
            outFS << "Class: " << q_array_[28] << endl; 
            break;
            
        case 'H':
        case 'h':
            outFS << "Class: " << q_array_[29] << endl; 
            break;
            
        default:
            cout << "Not a valid input. Re-enter" << endl;
            break;
    }
    
    cout << q_array_[31] << endl;
    cout << "A. " << q_array_[32] << endl;
    cout << "B. " << q_array_[33] << endl;
    cout << "C. " << q_array_[34] << endl;
    cout << "D. " << q_array_[35] << endl;
    cout << "E. " << q_array_[36] << endl;
    cout << "F. " << q_array_[37] << endl;
    cout << "G. " << q_array_[38] << endl;
    cout << "H. " << q_array_[39] << endl;
    cout << "I. " << q_array_[40] << endl;
    
    cin >> answer_;
    
    switch(answer_)
    {
        case 'A':
        case 'a':
            outFS << q_array_[32] << endl; 
            break;
        
        case 'B':
        case 'b':
            outFS << q_array_[33] << endl; 
            break;
        
        case 'C':
        case 'c':
            outFS << q_array_[34] << endl; 
            break;
            
        case 'D':
        case 'd':
            outFS << q_array_[35] << endl; 
            break;
        
        case 'E':
        case 'e':
            outFS << q_array_[36] << endl; 
            break;
        
        case 'F':
        case 'f':
            outFS << q_array_[37] << endl; 
            break;
            
        case 'G':
        case 'g':
            outFS << q_array_[38] << endl; 
            break;
            
        case 'H':
        case 'h':
            outFS << q_array_[39] << endl; 
            break;
            
        case 'I':
        case 'i':
            outFS << q_array_[40] << endl; 
            break;
            
        default:
            cout << "Not a valid input. Re-enter" << endl;
            break;
    }
    
    cout << q_array_[42] << endl;
    cout << "A. " << q_array_[43] << endl;
    cout << "B. " << q_array_[44] << endl;
    cout << "C. " << q_array_[45] << endl;
    
    cin >> answer_;
    
    if(answer_ == 'A' || answer_ == 'a')
    {
            cout << q_array_[47] << endl;
            cout << "A. " << q_array_[48] << endl;
            cout << "B. " << q_array_[49] << endl;
            cout << "C. " << q_array_[50] << endl;
            cout << "D. " << q_array_[51] << endl;
            cout << "E. " << q_array_[52] << endl;
            cout << "F. " << q_array_[53] << endl;
            cout << "G. " << q_array_[54] << endl;
            cout << "H. " << q_array_[55] << endl;
            
            cin >> answer_;
            
            switch(answer_)
            {
                case 'A':
                case 'a':
                    outFS << q_array_[48] << endl; 
                    break;
                
                case 'B':
                case 'b':
                    outFS << q_array_[49] << endl; 
                    break;
                
                case 'C':
                case 'c':
                    outFS << q_array_[50] << endl; 
                    break;
                    
                case 'D':
                case 'd':
                    outFS << q_array_[51] << endl; 
                    break;
                
                case 'E':
                case 'e':
                    outFS << q_array_[52] << endl; 
                    break;
                
                case 'F':
                case 'f':
                    outFS << q_array_[53] << endl; 
                    break;
                    
                case 'G':
                case 'g':
                    outFS << q_array_[54] << endl; 
                    break;
                    
                case 'H':
                case 'h':
                    outFS << q_array_[55] << endl; 
                    break;
                    
                default:
                    cout << "Not a valid input. Re-enter" << endl;
                    break;
            }
    }
            
    else if(answer_ == 'B' || answer_ == 'b')
    {
            cout << q_array_[57] << endl;
            cout << "A. " << q_array_[58] << endl;
            cout << "B. " << q_array_[59] << endl;
            cout << "C. " << q_array_[60] << endl;
            cout << "D. " << q_array_[61] << endl;
            
            cin >> answer_;
            
            switch(answer_)
            {
                case 'A':
                case 'a':
                    outFS << q_array_[58] << endl; 
                    break;
                
                case 'B':
                case 'b':
                    outFS << q_array_[59] << endl; 
                    break;
                
                case 'C':
                case 'c':
                    outFS << q_array_[60] << endl; 
                    break;
                    
                case 'D':
                case 'd':
                    outFS << q_array_[61] << endl; 
                    break;
                    
                default:
                    cout << "Not a valid input. Re-enter" << endl;
                    break;
            }
            
    }
        
    else if(answer_ == 'C' || answer_ == 'c')
    {
            cout << q_array_[63] << endl;
            cout << "A. " << q_array_[64] << endl;
            cout << "B. " << q_array_[65] << endl;
            cout << "C. " << q_array_[66] << endl;
            
            cin >> answer_;
            
            switch(answer_)
            {
                case 'A':
                case 'a':
                    outFS << q_array_[64] << endl; 
                    break;
                
                case 'B':
                case 'b':
                    outFS << q_array_[65] << endl; 
                    break;
                
                case 'C':
                case 'c':
                    outFS << q_array_[66] << endl; 
                    break;
                    
                default:
                    cout << "Not a valid input. Re-enter" << endl;
                    break;
            }
    }
    
    else 
    {
            cout << "Not a valid input. Re-enter" << endl;
    }
    
    outFS << "________________________________" << endl;
    outFS << "Attack Power: " << attck << endl;
    outFS << "Armor: " << armor << endl;
    outFS << "Intellect: " << intellect << endl;
    
    attck = attck;
            armor = armor;
            intellect = intellect;
    
    inFS.close();
    outFS.close();

};