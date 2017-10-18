//Created by Coral Dixon
//Created on: 10/9/2017
/*This program determines best cell phone plan by comparing the usage of ATT,
Verizon, and Sprint based on the users data usage inputs, and how many phones and 
tablets will be on the plan. It calculates the price of the plan as well. */

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {
    int num_lines = 0; //Variable for number of phones on plan
    int num_tablets = 0; //Variable for number of tablets on plan
    int data = 0; //Variable for the amount of data on plan
    int tablet_fee = 10; //Variable for how much extra it is for a tablet
    int add_line_fee = 20; //Variable for how much extra it is for additional phones
    int calc_tablet = (num_tablets * tablet_fee); //Calculates the charge for number of tablets by multiplying number of tablets by the fee
    int calc_lines = (add_line_fee * num_lines); //Calculates the charge for number of new phones by multiplying the number of new phones by the phone fee
    
    cout << "Enter number of phones: "; //User input for number of phones
    cin >> num_lines;
    cout << "Enter number of tablets: "; //User input for number of tablets
    cin >> num_tablets;
    cout << "Enter data in gigs up to 25: "; //User input for data usage
    cin >> data;
    cout << endl;
    
    if(num_lines == 1 && num_tablets == 0) { //If there is only 1 phone and no tablets...
        if(data == 2) {
            cout << "Sprint 2GB Plan for $40 per month"; //...suggest the Sprint 2GB plan
        }
        if(data >= 0) { //If there is only 1 phone and data is greater than or equal to 0, suggest the following plans
            cout << "ATT Unlimited Choice Plan for $60 per month" << endl;
            cout << "Verizon Unlimited for $80 per month" << endl;
            cout << "Sprint Unlimited for $60 per month" << endl;
        }
    }
    
    if(num_lines == 2 && num_tablets == 0) { //If number of phones is 2 and the number of tablets is 0....
        if(data > 1) { //...and the data usage is over 1, suggest the following plans
            cout << "ATT Unlimited Choice Plan for $115 per month" << endl;
            cout << "Verizon Unlimited for $" << 110 + calc_lines<< " per month" << endl;
            cout << "Sprint Unlimited for $" << 100 + (30 * num_lines) << " per month" << endl;
        }
        if(data == 1) { //....and the data is equal to 1, suggest the following plans
            cout << "ATT Family Plan for $70 per month" << endl;
        }
        if(data == 0) { //....and the data is equal to 0, suggest the following plans
            cout << "ATT Family Plan for $40 per month" << endl;
        }
    }
    
    if(num_lines > 2) { //If number of phones is greater than 2...
        if(data > 1 && num_tablets == 0) { //...and the data is greater than 1 and the number of tablets is equal to 0, suggest the following plans
            cout << "ATT Unlimited Choice Plan for $135 per month" << endl;
            cout << "Verizon Unlimited for $" << 110 + calc_lines << " per month" << endl;
            cout << "Sprint Unlimited for $" << 100 + (30 * num_lines) << " per month" << endl;
        }
        if(data > 1 && num_tablets >= 1) { //....and the data is greater than 1 and the number of tablets is greater than or = to 0, suggest the following plans 
            cout << "ATT Unlimited Choice Plan for $" << 135 + calc_tablet << " per month" << endl;
            cout << "Verizon Unlimited for $" << 110 + calc_lines + calc_tablet << " per month" << endl;
            cout << "Sprint Unlimited for $" << 100 + (30 * num_lines) + calc_tablet << " per month" << endl;
        }
    }

    return 0;
    
}

/*
Enter number of phones: 2
Enter number of tablets: 0
Enter data in gigs up to 25: 5

ATT Unlimited Choice Plan for $115 per month
Verizon Unlimited for $110 per month
Sprint Unlimited for $160 per month
*/

/*
Enter number of phones: 3
Enter number of tablets: 1
Enter data in gigs up to 25: 15

ATT Unlimited Choice Plan for $135 per month
Verizon Unlimited for $110 per month
Sprint Unlimited for $190 per month
*/

/*
ATT Unlimited Choice Plan for $60 per month
Verizon Unlimited for $80 per month
Sprint Unlimited for $60 per month
*/