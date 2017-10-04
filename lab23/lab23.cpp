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

int RandomNumber(int user_num1, int user_num2, int& new_usernum1, int& new_usernum2) { //Function that generates a random # between 2 numbers inputed by the user then switches them before generating the random number
    int ran_num = 0;
    int user_input = 0;
    
    new_usernum2 = user_num1;//switches the users first inputed number with the second
    new_usernum1 = user_num2; // switches the users second inputed number with the first
    
    user_input = (new_usernum2 - new_usernum1) + 1; //calcluates the random number range
    
    srand(time(0));
    ran_num = (rand() % user_input) + new_usernum1; //calculates a random number
    
    return ran_num;
}

void NumSwitch(int num_one, int num_two, int& new_num1, int& new_num2) { //Function that switches 2 numbers inputed by the user
    new_num1 = num_two;
    new_num2 = num_one;
    
    //swaps the users 2 inputed numbers
    cout << new_num1 << "|" << new_num2 << endl; //displays the numbers after switched
    
    return;
    
}

int main() {
    int new_usernum1 = 0; //pass by reference variable for first inputed number
    int new_usernum2 = 0; //pass by reference variable for second inputed number
    int num_1 = 0; //variable for user input for first number
    int num_2 = 0; //variable for user input for second number
    
    cout << "Enter 2 whole numbers, the first being smaller than the second: ";
    cin >> num_2 >> num_1; //user input
    cout << endl;
    
    cout << RandomNumber(num_1, num_2, new_usernum2, new_usernum1) << endl; //function call for the RandomNumber
    
    
    cout << "___________________" << endl; //spacing
    cout << endl;
    
    
    int new_num1 = 0; //pass by reference variable for first inputed number
    int new_num2 = 0; //pass by reference variable for second inputed number
    int first_int = 0; //variable for user input first number
    int second_int = 0; //variable for user input second number
    
    cout << "Input 2 random integers: ";
    cin >> first_int >> second_int; //user input
    cout << endl;
    
    cout << first_int << "|" << second_int << endl; //displays users inputed numbers
    
    NumSwitch(first_int, second_int, new_num1, new_num2);//function call for the switched numbers
    
    return 0;
    
}

/* INPUT: 1, 10
   OUTPUT: 8
   
   INPUT: 5, 82
   OUTPUT: 34
   
   INPUT: 22, 73
   OUTPUT: 67

Input 2 random integers: 1 5

1|5
5|1


Process exited with code: 0
*/