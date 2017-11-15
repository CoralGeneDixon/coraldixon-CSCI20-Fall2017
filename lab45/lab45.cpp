/*
This program was created by Coral Dixon on November 15 2017.
The program is uses strings to create different user name combos
based on the users input. The user can input a first name up to 10
characters, and a last name up to 20 characters. If it is a name is
larger than allowed, the program alerts the user that the max size
is reached. It also tells the user if their names are the same, and
outputs a warning if they are. The program outputs 3 different
user name options.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    string first_name = ""; //User first name input variable
    string last_name = ""; //User last name input variable
    
    // User enters first name
    cout << "Enter your first name (up to 10 characters): ";
    cin >> first_name;
    
    // User enters last name
    cout << "Enter your last name (up to 20 characters): ";
    cin >> last_name;
    cout << endl;
    
    cout << "Name: " << first_name << " " << last_name << endl;
    cout << endl;
    
    //FINDS LENGTH OF NAMES
    if(first_name.length() > 10) { //If first name is larger than 10 characters...
    	cout << "Your first name is over 10 characters long!" << endl; //Prints a warning
    }
    else if (last_name.length() > 20){ //If last name is larger than 20 characters...
    	cout << "your last name is over 20 characters long!" << endl; //Prints a warning
    }
    //END
    
    //COMPARING NAME'S
    if(first_name == last_name) { //If the first and last name are the same...
    	cout << "*WARNING* Your first and last name is the same!" << endl; //This warning prints
    }
    //END
    
    
    //USER NAME COMBOS
    cout << "Pick a user name:" << endl;
    cout << endl;
	cout << first_name.append(last_name) << endl; //Last name appended to the first name
    cout << first_name.substr(0, 1) << last_name.substr(0, 20) << endl; //Inserts full last name after the first index of first name
    cout << first_name.substr(0, 2) << last_name.substr(0, 20) << endl; //Inserts full last name after the first 2 indexes of first name
    cout << last_name.substr(0, 1) << first_name.substr(0, 10)<< endl; //Inserts full both first and last name after the first index of the last name
    //END

    return 0;
}

/*
Enter your first name (up to 10 characters): Coral
Enter your last name (up to 20 characters): Dixon

Name: Coral Dixon

Pick a user name:

CoralDixon
CDixon
CoDixon
DCoralDixon
*/

/*
Enter your first name (up to 10 characters): April Browne
Enter your last name (up to 20 characters): 
Name: April Browne

Pick a user name:

AprilBrowne
ABrowne
ApBrowne
BAprilBrown
*/