/*This program was created by Coral Dixon on September 16.
The program calculates and prints an indiviuals weekly pay stub based on
their hourly pay, hours worked, taxes paid, and milage 
reimbursement, and insurance payments. It also calculates
their net pay and gross wage.
*/
#include <iostream>
#include <string>
using namespace std;

//Main Struct Input
struct Pay_Stub{
    string name;
    double insurance;
    double pay_hourly;
    double hours_weekly;
    double total_reimbursement;
    double odometer_start;
    double odometer_end;
    double miles_traveled;
    double net_pay;
    double gross_pay;
    double total_pay;
};

int main()
{   //Object for employee pay stub
    Pay_Stub employee;
    
    //Constant variables
    string divider = "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
    const double tax_rate = .83;
    const double reimb_rate = .35;
    
//Program input    
    cout << "Enter First and Last Name: ";
    getline(cin, employee.name);
    
    cout << "Enter Hours Worked this Week: ";
    cin >> employee.hours_weekly;
    
    cout << "Enter Hourly Wage: ";
    cin >> employee.pay_hourly;
    
    cout << "Enter Cost of Insurance: ";
    cin >> employee.insurance;
    
    cout << "Enter Your Starting Odometer Number: ";
    cin >> employee.odometer_start;
    
    cout << "Enter Your Ending Odometer Number: ";
    cin >> employee.odometer_end;

//Program output
    employee.miles_traveled = (employee.odometer_end - employee.odometer_start);
    employee.total_reimbursement = (employee.miles_traveled * reimb_rate);
    employee.gross_pay = (employee.pay_hourly * employee.hours_weekly) + employee.total_reimbursement;
    employee.net_pay = (employee.gross_pay * tax_rate) - employee.insurance;
    employee.total_pay = employee.net_pay + employee.total_reimbursement;
    
    cout << divider << endl;
    cout << employee.name << endl;
    cout << "Total Hours Worked: " << employee.hours_weekly << endl;
    cout << "Hourly Wage: $" << employee.pay_hourly << endl;
    cout << "Gross Pay: $" << employee.gross_pay << endl;
    cout << "Net Pay: $" << employee.net_pay << endl;
    cout << "Total Reimbursment: $" << employee.total_reimbursement << endl;
    cout << "Total Pay: $" << employee.total_pay << endl;
    
    return 0;
    
}


 