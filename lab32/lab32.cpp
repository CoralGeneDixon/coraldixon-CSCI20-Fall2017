//Created by Coral Dixon
//Created on: 10/9/2017
/*This program calculates the amount of income tax, and tax deducted
or returned based on the persons gross income and marital status*/

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() { //Main function
    string name = " "; //variable for user name input
    char filing_status = ' '; //variable for user marital status input
    int gross_wage = 0; //variable for user goss wage input
    double tax_withheld = 0.0; //variable for user tax withheld input
    double tax_owed = 0.0; //variable for calculating taxes owed
    
    cout << "Name: "; //user input for name
    getline(cin, name);
    
    cout << "Marital Status: "; //user input for marital status
    cin >> filing_status;
    
    cout << "Gross Wages: "; //user input for gross wages
    cin >> gross_wage;
    
    cout << "Taxes Withheld: "; //user input for taxes withheld
    cin >> tax_withheld;
    cout << endl; //spacing
    
    
    
    switch (filing_status) { //Switch/case for marital status input
        case 'm':
        case 'M':
            gross_wage = gross_wage - 4050 - 12700; //if user is married, they get 4050 + 12700 deducted from gross wages in taxes
            break;
        
        case 's':
        case 'S':
            gross_wage = gross_wage - 4050 - 6350; //if user is single, they get 4050 + 6350 deducted from gross wages
            break;
    //This switch creates new gross wage values
    }
    
    if ((gross_wage < 0) && (filing_status == 's' || filing_status == 'S' || filing_status == 'm' || filing_status == 'M')) {
        tax_owed = 0;
    //if user gross wage is under 0 after the above tax deductions, and they are either married or single, they get 0 taxes owed
    }
    if (filing_status == 's' || filing_status == 'S') { //if the users filing status is single...
        if ((gross_wage >= 0) && (gross_wage <= 9325)) { //...and their gross wages are between 0-9325...
            tax_owed = gross_wage * 0.10; //...their taxes owed is 10% of their gross wages
        }
        else if ((gross_wage >= 9326) && (gross_wage <= 37950)) { //...and their gross wage is between 9326-37950...
            tax_owed = ((gross_wage - 9326) * 0.15) + 932.50; //...their taxes owed is $932.50 + 15% of any excess cash over $37,950
        }
        else if ((gross_wage >= 37951) && (gross_wage <= 91900)) { //...and their gross wage is between 
            tax_owed = ((gross_wage - 37950) * 0.25) + 5226.25;
        }
        else if ((gross_wage >= 91901) && (gross_wage <= 191650)) {
            tax_owed = ((gross_wage - 91900) * 0.28) + 18713.75;
        }
        else if ((gross_wage >= 191651) && (gross_wage <= 416700)) {
            tax_owed = ((gross_wage - 191650) * 0.33) + 46643.75;
        }
        else {
            tax_owed = ((gross_wage - 416700) * 0.396) + 120910.25;
        }
    }
    if ((filing_status == 'm') || (filing_status == 'M')) {
        if ((gross_wage >= 0) && (gross_wage <= 18650)) {
            tax_owed = gross_wage * 0.10;
        }
        else if ((gross_wage >= 18651) && (gross_wage <= 75900)) {
            tax_owed = ((gross_wage - 18650) * 0.15) + 1865;
        }
        else if ((gross_wage >= 75901) && (gross_wage <= 153100)) {
            tax_owed = ((gross_wage - 75900) * 0.25) + 75900;
        }
        else if ((gross_wage >= 153101) && (gross_wage <= 233350)) {
            tax_owed = ((gross_wage - 153100) * 0.28) + 29752.50;
        }
        else if ((gross_wage >= 233351) && (gross_wage <= 416700)) {
            tax_owed = ((gross_wage - 233350) * 0.33) + 52222.50;
        }
        else {
            tax_owed = ((gross_wage - 470700) * 0.396) + 470700;
        }
    }
    if (tax_owed > tax_withheld) {
        cout << "Owe more tax" << endl;
    }
    else if (tax_owed < tax_withheld) {
        cout << "Entitled to refund" << endl;
    }
    
    cout << name << endl;
    cout << filing_status << endl;
    cout << "Taxes Withheld: " << tax_withheld << endl;
    cout << "Taxes Owed: " << tax_owed << endl;
   
return 0;

}

/*
Name: Joe Vandal
Marital Status: s
Gross Wages: 12100
Taxes Withheld: 250

Entitled to refund
Joe Vandal
s
Taxes Withheld: 250
Taxes Owed: 170
*/

/*
Name: Alfonso Haynes
Marital Status: m
Gross Wages: 32351
Taxes Withheld: 3192

Entitled to refund
Alfonso Haynes
m
Taxes Withheld: 3192
Taxes Owed: 1560.1
*/

/*
Name: Bridget Rowe
Marital Status: s
Gross Wages: 88229
Taxes Withheld: 12057

Owe more tax
Bridget Rowe
s
Taxes Withheld: 12057
Taxes Owed: 15196
*/

/*
Name: Wendy Joseph
Marital Status: m
Gross Wages: 73291
Taxes Withheld: 6972

Owe more tax
Wendy Joseph
m
Taxes Withheld: 6972
Taxes Owed: 7548.65
*/