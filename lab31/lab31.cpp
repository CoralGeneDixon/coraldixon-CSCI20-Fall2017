//Created by Coral Dixon
//Created on: 10/9/2017
/* */

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {
    int num_lines = 0;
    int num_tablets = 0;
    int data = 0;
    int budget = 0;
    int tablet_fee = 10;
    int add_line_fee = 20;
    int calc_tablet = (num_tablets * tablet_fee);
    int calc_lines = (add_line_fee * num_lines);
    
    cout << "Enter number of phones: ";
    cin >> num_lines;
    cout << "Enter number of tablets: ";
    cin >> num_tablets;
    cout << "Enter data in gigs up to 25: ";
    cin >> data;
    cout << endl;
    
    if(num_lines == 1 && num_tablets == 0) {
        if(data == 2) {
            cout << "Sprint 2GB Plan for $40 per month";
        }
        if(data >= 0) {
            cout << "ATT Unlimited Choice Plan for $60 per month" << endl;
            cout << "Verizon Unlimited for $80 per month" << endl;
            cout << "Sprint Unlimited for $60 per month" << endl;
        }
    }
    
    if(num_lines == 2 && num_tablets == 0) {
        if(data > 1) {
            cout << "ATT Unlimited Choice Plan for $115 per month" << endl;
            cout << "Verizon Unlimited for $" << 110 + calc_lines<< " per month" << endl;
            cout << "Sprint Unlimited for $" << 100 + (30 * num_lines) << " per month" << endl;
        }
        if(data == 1) {
            cout << "ATT Family Plan for $70 per month" << endl;
        }
        if(data == 0) {
            cout << "ATT Family Plan for $40 per month" << endl;
        }
    }
    
    if(num_lines > 2) {
        if(data > 1 && num_tablets == 0) {
            cout << "ATT Unlimited Choice Plan for $135 per month" << endl;
            cout << "Verizon Unlimited for $" << 110 + calc_lines << " per month" << endl;
            cout << "Sprint Unlimited for $" << 100 + (30 * num_lines) << " per month" << endl;
        }
        if(data > 1 && num_tablets >= 1) {
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