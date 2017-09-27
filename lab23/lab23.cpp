/*This program was created by Coral Dixon on Sept 27 2017.
The following program uses 2 seperate functions. The first generates
a random number between 2 externally inputed numbers by the user
after swapping the values of their variables.

The second function prints 2 user inputed numbers and then swaps them
*/

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void RandomNumber() { //Function that generates a random # between 2 numbers inputed by the user
    int user_input;
    int ran_num;
    int user_num1;
    int user_num2;
    
    cout << "Enter 2 whole numbers, the first being smaller than the second: ";
    cin >> user_num2 >> user_num1; //user input
    cout << endl;
    
    swap(user_num1, user_num2); //swap functions switches the users numbers
    user_input = (user_num2 - user_num1) + 1; //calcluates the random number range
    
    srand(time(0));
    ran_num = (rand() % user_input) + user_num1; //calculates a random number
    
    cout << ran_num << endl; //generates random #
    
    return;
}

void NumSwitch() { //Function that switches 2 numbers inputed by the user
    int user_num1;
    int user_num2;
    
    cout << "Input 2 random integers: ";
    cin >> user_num1 >> user_num2; //user input
    cout << endl;
    cout << user_num1 << "|" << user_num2 << endl; //displays users inputed numbers
    
    swap(user_num1, user_num2); //swaps the users 2 inputed numbers
    cout << user_num1 << "|" << user_num2 << endl; //displays the numbers after switched
    
    return;
    
}

int main() {
    RandomNumber(); //function call for the RandomNumber
    
    cout << "___________________" << endl; //spacing
    cout << endl;
    
    NumSwitch(); //function call for the switched numbers
    
    return 0;
    
}

/* INPUT: 1, 10
   OUTPUT: 8
   
   INPUT: 5, 82
   OUTPUT: 34
   
   INPUT: 22, 73
   OUTPUT: 67
*/