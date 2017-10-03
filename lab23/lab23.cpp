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
    int user_input = 0;
    int ran_num = 0;
    int user_num1 = 0;
    int user_num2 = 0;
    
    swap(user_num1, user_num2); //swap functions switches the users numbers
    user_input = (user_num2 - user_num1) + 1; //calcluates the random number range
    
    srand(time(0));
    ran_num = (rand() % user_input) + user_num1; //calculates a random number
    
    return;
}

void NumSwitch() { //Function that switches 2 numbers inputed by the user
    int user_num3 = 0;
    int user_num4 = 0;
    int user_num5 = 0;
    
    user_num3 = user_num4;
    user_num4 = user_num5;
    user_num5 = user_num3;
    //swaps the users 2 inputed numbers
    cout << user_num3 << "|" << user_num4 << endl; //displays the numbers after switched
    
    return;
    
}

int main() {
    
    cout << "Enter 2 whole numbers, the first being smaller than the second: ";
    cin >> user_num2 >> user_num1; //user input
    cout << endl;
    
    RandomNumber(); //function call for the RandomNumber
    cout << ran_num << endl; //generates random #
    
    cout << "___________________" << endl; //spacing
    cout << endl;
    cout << "Input 2 random integers: ";
    cin >> user_num3 >> user_num4; //user input
    cout << endl;
    cout << user_num3 << "|" << user_num4 << endl; //displays users inputed numbers
    
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