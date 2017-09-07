//This program was created by Coral Dixon for lab 1.4 on 
//September 6th 2017. The following program allows a user
//to input any amount of change and calculate the number
//of pennies, nickels, dimes, and quarters they have, as
//well as the amount of dollars the change equals out to.

 #include <iostream>
 #include <string>
 using namespace std;
 
 int main() {
    
    string change_input = "Enter amount of change here: ";
    
    //The constant integer values of quarters, nickles, dimes, and pennies
    const int QUARTERS_AMOUNT = 25;
    const int DIMES_AMOUNT = 10;
    const int NICKLES_AMOUNT = 5;
    const int PENNIES_AMOUNT = 1;
    
    //The percentage that coinstar takes as payment for services
    const double COINSTAR_PERCENTAGE = 10.9;
    
    //The constant value of a dollar
    const int DOLLAR_VALUE = 100;
    
    //Variable for the change amount user inputs
    int user_input = 0;
    
    //Variables for the number of different coins being inputed
    int quarters_inputed = 0;
    int dimes_inputed = 0;
    int nickles_inputed = 0;
    int pennies_inputed = 0;
    
    //variable for the coinstars fee
    double coinstar_fee = 0.0;
    
    //variable for the amount of dollars user will receive
    double user_dollars = 0.0;
    
    //where user inputs amount of change
    cout << change_input << endl;
    cin >> user_input;
    
    //The following equations take the users input, divides that by the highest coin value, 
    //and then divides the remainder by the next largest coin value.
    //This calculates the number of coins the user has inputed.
    quarters_inputed = user_input / QUARTERS_AMOUNT;
    dimes_inputed = (user_input % QUARTERS_AMOUNT) / DIMES_AMOUNT;
    nickles_inputed = ((user_input % QUARTERS_AMOUNT) % DIMES_AMOUNT) / NICKLES_AMOUNT;
    pennies_inputed = (((user_input % QUARTERS_AMOUNT) % DIMES_AMOUNT) % NICKLES_AMOUNT) / PENNIES_AMOUNT;
    
    //This equation calculates the coinstars fee
    coinstar_fee = (user_input / COINSTAR_PERCENTAGE) / DOLLAR_VALUE;
    
    //This equation calculates the users amount converted into dollars minus the coinstars fee.
    user_dollars = (user_input / DOLLAR_VALUE) - coinstar_fee;
    
    cout << "Quarters: " << quarters_inputed << endl;
    cout << "Dimes: " << dimes_inputed << endl;
    cout << "Nickles: " << nickles_inputed << endl;
    cout << "Pennies: " << pennies_inputed << endl;
    
    cout << "After a $" << coinstar_fee << " fee, your dollar amount is: $" << user_dollars << endl;
    
    return 0;
    
         
}