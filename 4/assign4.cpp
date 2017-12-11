/*Created by Coral Dixon on Dec 1 2017
This program is designed to take test results from an input.txt file
and process them through a class that calculates the personality types
of the test results.
*/

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

class PersonalityTest { //Class for the personality test answer calculator
    
    public:
        //Public functions
        PersonalityTest(); //Default constructor
        
        //void SetQuestions(char answer_array[]);
        
        void SetEI(char answer_); //Set function for Introvert/Extrovert
        char GetEI(); //Get Function for Introvert/Extrovert
        
        void SetSN(char answer_); //Set function for Sensation/Intuition
        char GetSN(); //Get function for Sensation/Intuition
        
        void SetTF(char answer_); //Set function for Thinking/Feeling
        char GetTF(); //Get function for Thinking/Feeling
        
        void SetJP(char answer_); //Set function for Judging/Perceiving
        char GetJP(); //Get function for Judging/Perceiving
        
        void Print(); //Print function
    
    private:
        //Private variables
        int question_;
        char p_type_EI;
        char p_type_SN;
        char p_type_TF;
        char p_type_JP;
        char answer_;
        int extrovert_;
        int introvert_;
        int sensation_;
        int intuition_;
        int thinking_;
        int feeling_;
        int judging_;
        int perceiving_;
        
};

PersonalityTest::PersonalityTest() //Default constructor
{
    question_ = 0;
    p_type_EI = ' ';
    p_type_SN = ' ';
    p_type_TF = ' ';
    p_type_JP = ' ';
    answer_ = ' ';
    extrovert_ = 0;
    introvert_ = 0;
    sensation_ = 0;
    intuition_ = 0;
    thinking_ = 0;
    feeling_ = 0;
    judging_ = 0;
    perceiving_ = 0;
}

void PersonalityTest::SetEI(char answer_) //Takes the answer char from the input array and calculates a result 
{
    switch (answer_) //Switch-Case to determine if E or I personality type
    {
        case 'A':
            extrovert_ = extrovert_ + 1; //Adds 1 to the variable extrovert_ if char = A
            break;
            
        case 'B':
            introvert_ = introvert_ + 1; //Adds 1 to the variable introvert_ if char = B
            break;
        
        default: //If neither A nor B are chosen the variable amounts do not change.
            introvert_ = introvert_;
            extrovert_ = extrovert_;
            break;
            
    }
    
    return;
}

char PersonalityTest::GetEI() //Compares the number of answers for A and B for SetEI
{
    if(introvert_ > extrovert_) //If integer variable introvert_ is greater than extrovert_ the personality type is I
    {
        p_type_EI = 'I';
    }
    else if(introvert_ < extrovert_) //If integer variable introvert_ is less than extrovert_ the personality type is E
    {
        p_type_EI = 'E';
    }
    else //If equal, then a ? is printed
    {
        p_type_EI = '?';    
    }
    
    return p_type_EI; //Returns the personality type for SetEI
}

void PersonalityTest::SetSN(char answer_) //Takes the answer char from the input array and calculates a result
{
    switch (answer_) //Switch-Case to determine if S or N personality type
    {
        case 'A':
            sensation_ = sensation_ + 1; //Adds 1 to the variable extrovert_ if char = A
            break;
            
        case 'B':
            intuition_ = intuition_ + 1; //Adds 1 to the variable introvert_ if char = B
            break;
        
        default: //If neither A nor B are chosen the variable amounts do not change.
            sensation_ = sensation_;
            intuition_ = intuition_;
            break;
            
    }
    
    return;
}

char PersonalityTest::GetSN() //Compares the number of answers for A and B for SetSN
{
    if(sensation_ > intuition_) //If integer variable sensation_ is greater than intuition_ the personality type is S
    {
        p_type_SN = 'S';
    }
    else if(sensation_ < intuition_) //If integer variable sensation_ is greater than intuition_ the personality type is N
    {
        p_type_SN = 'N';
    }
    else //If equal, then a ? is printed
    {
        p_type_SN = '?'; 
    }
    
    return p_type_SN; //Return personality type
}

void PersonalityTest::SetTF(char answer_) //Takes the answer char from the input array and calculates a result
{
    switch (answer_)
    {
        case 'A':
            thinking_ = thinking_ + 1; //Adds 1 to the variable thinking_ if char = A
            break;
            
        case 'B':
            feeling_ = feeling_ + 1; //Adds 1 to the variable feeling_ if char = B
            break;
        
        default: //If neither A nor B are chosen the variable amounts do not change.
            thinking_ = thinking_;
            feeling_ = feeling_;
            break;
            
    }
    
    return;
}

char PersonalityTest::GetTF() //Compares the number of answers for A and B for SetTF
{
    if(thinking_ > feeling_) //If integer variable thinking_ is greater than feeling_ the personality type is T
    {
        p_type_TF = 'T';
    }
    else if(thinking_ < feeling_) //If integer variable thinking_ is less than feeling_ the personality type is S
    {
        p_type_TF = 'F';
    }
    else if(thinking_ == feeling_) //If equal, then a ? is printed
    {
        p_type_TF = '?';    
    }
    
    return p_type_TF; //Return personality type
}

void PersonalityTest::SetJP(char answer_) //Takes the answer char from the input array and calculates a result
{
    switch (answer_)
    {
        case 'A':
            judging_ = judging_ + 1; //Adds 1 to the variable judging_ if char = A
            break;
            
        case 'B':
            perceiving_ = perceiving_ + 1; //Adds 1 to the variable perceiving_ if char = B
            break;
        
        default: //If neither A nor B are chosen the variable amounts do not change.
            judging_ = judging_;
            perceiving_ = perceiving_;
            break;
            
    }
    
    return;
}

char PersonalityTest::GetJP() //Compares the number of answers for A and B for SetJP
{
    if(judging_ > perceiving_) //If integer variable judging_ is greater than perceiving_ the personality type is J
    {
        p_type_JP = 'J';
    }
    else if(judging_ < perceiving_) //If integer variable judging_ is less than perceiving_ the personality type is T
    {
        p_type_JP = 'P';
    }
    else //If equal, then a ? is printed
    {
        p_type_JP = '?';    
    }
    
    return p_type_JP; //Return personality type
}

void PersonalityTest::Print() //Prints test results
{
    ofstream outFS; //Creates outFS object
    outFS.open("output.txt"); //Opens output.txt
    
    //Pushes the following strings to the output.txt file
    outFS << "Your personality type is: " << GetEI() << GetSN() << GetTF() << GetJP() << endl; //Pushes the personality chars returned by the Get functions
    outFS << endl;
    outFS << "E = Extrovert" << endl;
    outFS << "I = Introvert" << endl;
    outFS << "S = Sensation" << endl;
    outFS << "N = Intuition" << endl;
    outFS << "T = Thinking" << endl;
    outFS << "F = Feeling" << endl;
    outFS << "J = Judging" << endl;
    outFS << "P = Perceiving" << endl;
    
    outFS.close(); //Closes the output.txt
    
    return;
}

int main(){
    ifstream inFS; //Declares the inFS object
    //ofstream outFS;
    PersonalityTest test; //Declares the test object for class PersonalityTest
    
    char answer_array[1000];
    char answer_ = ' ';
    string answer_section[100];
    int question_ = 0;
    
    inFS.open("input.txt");

    
    if (!inFS.is_open())
    { //If the file input.txt does not open...
        
        cout << "Could not open file input.txt" << endl; //...print warning for user.
        
        return 1;
    } 
    
    else 
    { //If the file input.txt DOES open...
        
        cout << "input.txt has opened" << endl; //...print verification
    }
    
    cout << endl; //Spacing
    
    // int j = 0;
    // while(!inFS.eof()) 
    // {
    //     getline(inFS, answer_section[j]);
    //     j++;
    // }
    

    //For loops that access the answer arrays pulled from the input.txt
    for(int i = 0; i < 70; i++)
    {   
        inFS >> answer_array[i]; //Grabbing an array of answers from input file
        answer_ = answer_array[i]; //Assigning individual chars from array to the varible answer_
        
        //Starting question numbering
        if(i % 7 == 0) //If i%7 is 0
        {
            question_ = 1; //...question is category 1
        }
        else if((i % 7 == 1) || (i % 7 == 2)) //If i%7 is 1 or 2....
        {
            question_ = 2; //....question is category 2
        }
        else if((i % 7 == 3) || (i % 7 == 4)) //If i%7 is 3 or 4....
        {
            question_ = 3; //....question is category 3
        }
        else if((i % 7 == 5) || (i % 7 == 6)) //If i%7 is 5 or 6
        {
            question_ = 4; //....question is category 4
        }
        //End of question numbering
        
        //Switch/case that passes the answer_ char to the proper question section
        switch(question_)
        {
            case 1: //If question section 1...
                test.SetEI(answer_); //Push the answer_ char through function SetEI
                //test.GetEI();
                break;
            
            case 2: //If question section 2....
                test.SetSN(answer_); //Push the answer_ char through function SetSN
                //test.GetSN();
                break;
                
            case 3:  //If question section 3....
                test.SetTF(answer_); //Push the answer_ char through function SetTF
                //test.GetTF();
                break;
                
            case 4: //If question section 4....
                test.SetJP(answer_); //Push the answer_ char through function SetSN
                //test.GetJP();
                break;
            
            default:
                break;
        }
        
        // cout << test.GetTF();
        // cout << endl;
        //cout << test.GetJP();
        
        // cout << answer_ << endl;
        // cout << endl;
        // cout << question_ << endl;
        // cout << endl;
        // cout << answer_array << endl;
    }
        
    test.Print(); //Print the results of test
        
        
    inFS.close(); //Close input.txt file
   // outFS.close();
        
    return 0;
};