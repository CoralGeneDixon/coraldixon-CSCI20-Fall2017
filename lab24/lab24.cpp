/*This program was created by Coral Dixon on October 2 2017.
The following program uses 3 functions: 
1) a random number generator that accepts 2 imputed values, 
swaps them, and then uses the 2 values to generate a 
random number between them using a return function. 
2) a function that accepts input for pounds and 
returns them as kilograms. 
3) a function that accepts input for kilograms 
and returns them to pounds. 
The main will call the random number generator and 
use the random number to input the number of pounds 
to turn into kilograms. Then the kilograms will 
be returned to the last function to calculate pounds.
*/

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int RandomNumber(int user_num1, int user_num2) { //Function that generates a random # between 2 numbers inputed by the user
    int user_range = 0;
    int ran_num = 0;
    
    swap(user_num1, user_num2); //swap functions switches the users numbers
    user_range = (user_num2 - user_num1) + 1; //calcluates the random number range
    
    srand(time(0));
    ran_num = (rand() % user_range) + user_num1; //calculates a random number
    
    cout << "number: " << ran_num << endl;
    
    return ran_num;
}

double PoundsToKilo(int ran_num) {
    double kilograms = 0;
    double pounds = 0;
    
    pounds = ran_num;
    kilograms = (1.0 / 2.2) * pounds;
    
    cout << pounds << "lbs = " << kilograms << "kgs" << endl;
    
    return kilograms;
}

double KiloToPounds(int kilograms) {
    double pounds = 0;
    
    pounds = kilograms * 2.2;
    
    cout << kilograms << "kgs = " << pounds << "lbs" << endl;
    
    return 0;
}


int main() {
    int num1 = 0;
    int num2 = 0;
    int ran_num = 0;
    int kilograms = 0;
    
    cout << "Enter 2 whole numbers, the first being smaller than the second: ";
    cin >> num2 >> num1; //user input

    RandomNumber(num1, num2); //function call for the RandomNumber
    PoundsToKilo(ran_num);
    KiloToPounds(kilograms);
    
    return 0;
    
}

