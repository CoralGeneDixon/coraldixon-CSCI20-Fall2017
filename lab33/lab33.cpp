/*
Created by: Coral Dixon
Created on: 10/18/17
This program uses a random number generator to find an integer
between 1-50 (inclusive). It then asks for the user to input
a number between those values. If the user inputs a number
not within that range, it tells the user to try again. If the
user inputs a number larger than the number chosen by the 
program, it tells the user it's too high, and to input another
number. If the the user inputs a number that is lower the the
number chosen, it tells the user it's too low, and to input
another number. If the user inputs the correct number, the
program tells the user they got it right.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber() { //Function that generates a random # between 1-50(inclusive)
    int ran_num = 0;
    
    srand(time(0)); // Resets the number each time program is ran
    ran_num = (rand() % 50) + 1; //1 to 50
    
    return ran_num; // Returns the random number
}

int main() {
    int ran_num = RandomNumber(); // Variable to hold random number chosen
    string high = "Too High. Try Again: ";
    string low = "Too Low. Try Again: ";
    string win = "Just Right! You win!";
    int user_num = 0;
    
    cout << "Enter a random number between 1-50: ";
    cin >> user_num; // User input for number guess
    cout << endl;
    
    for (int i = 5; i >= 0; --i) { // For loop that creates a count down from 5-0.
        cout << i << endl; //prints countdown
    }
    
    cout << endl;
    
    while (user_num != ran_num) { //While loop that checks to see if the users inputed number
        if((user_num >= 1) && (user_num <= 50)) { //If number is between 1-50...
            if(user_num < ran_num) { //...but the user number is less than the chosen number...
                cout << low; //...print the string for number is too low
                cin >> user_num; // and allow user to input a new number
            }
            else if(user_num > ran_num) { //...but the user number is more than the chosen number...
                cout << high; //...print the string for number is too high
                cin >> user_num; // and allow user to input a new number
            }
        }
        else {
            cout << "Invald. Re-enter number: "; //If the user number is not within the range of 1-50...
            cin >> user_num; //...and allow for new user input
        }
    }
    
    cout << win; //if the user number is the same as the chosen number, print the string for winning
    
    return 0;
}

/*
Enter a random number between 1-50: 25

5
4
3
2
1
0

Too High. Try Again: 20
Too High. Try Again: 15
Too High. Try Again: 10
Too High. Try Again: 5
Too High. Try Again: 4
Just Right! You win!
*/