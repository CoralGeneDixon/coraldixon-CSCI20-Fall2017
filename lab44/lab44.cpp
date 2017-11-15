//Created by Coral Dixon on Nov 13 2017
/*This program allows the user to enter their first and last name.
First name c-string should allow for up to 10 characters. Last name should
allow for up to 20 character. The program will tell the user if their name
is larger than the max size. It should determine if the names inputed are
the same, and output a warning to the user if they are. After checking to make
sure the names don't exceed the max character sizes, and that the names are not 
the same, the program will output 3 username options.
*/


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main () {
    const int first_name = 10;// Max string length for first name
    const int last_name = 20;//Max string length for last name
    
    int first_num = 0;
    int last_num = 0;
    
    char first_str[first_name] = " "; // User defined first namestring
    char last_str[last_name] = " "; // User defined first namestring

    bool same = false; //bool for compare

    //FINDS IF USER STRING IS OVER THE ARRAY AMOUNT
    //first_num = strlen(first_str);
    //last_num = strlen(last_str);

    // Prompt user to enter first name
    cout << "Enter your first name (up to 10 characters): ";
    cin >> first_str;
    
    // Prompt user to enter last name
    cout << "Enter your last name (up to 20 characters): ";
    cin >> last_str;
    

    if ((strlen(first_str) > first_name) || (strlen(last_str) > last_name)) {//if the users names are larger than the cstring allows, user gets a warning
        cout << "WARNING: Names are too long." << endl;
    }
    
    //COMPARES IF THE STRINGS ARE THE SAME
    if(strcmp(first_str, last_str) == 0){
        cout << "Your first and last name are the same" << endl;
        cout << endl;
        
        cout << "Please enter a different first name: ";
        cin >> first_str;
        cout << endl;
        
        cout << "Please enter a different last name: ";
        cin >> last_str;
        cout << endl;
    }
    //END STRING COMPARISON
        
    //PRINTS OUT THREE USERNAME OPTIONS
    cout << "Here's the list of available usernames: " << endl;
   
    for(int i = 0; i <= 0; i++){ //first char of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= last_name; j++){ //full last name
           cout << last_str[j];
    }
    cout << endl;
    for(int i = 0; i <= 2; i++){//First 3 chars of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= last_name; j++){//full last name
           cout << last_str[j];
    } 
    cout << endl;
    for(int i = 0; i <= 4; i++){//first 4 chars of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= 4; j++){//first 4 chars of lastname
           cout << last_str[j];
    }
    cout << endl;
    //END PRINT OUT OF USERNAMES
    
    return 0;
}



/*
Enter your first name (up to 10 characters): coral
Enter your last name (up to 20 characters): dixon
Here's the list of available usernames: 
cdixon
cordixon
coraldixon
*/