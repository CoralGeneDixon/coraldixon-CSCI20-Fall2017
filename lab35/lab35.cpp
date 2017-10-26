//Created by Coral Dixon on October 25 2017
/*
This program uses a class to convert temps between Kelvin, 
Fahrenheit, and Celsius while also internally storing the 
values in kelvin. The class needs to be run by a default 
constructor that sets kelvin to 0, as well as an overloaded 
constructor that accepts the kelvin values, but does not 
allow a value less than 0. The class MUST be named 
TemperatureConverter and respond with the teacher provided main function.
*/  
#include <iostream>
#include <cmath>
using namespace std;

class TemperatureConverter //Class that converts Kelvins to celsius and fahrenheit
{
    private:
        double kelvin_; //main variable for class
        
    public:
        TemperatureConverter() //default constructor
        {
            kelvin_ = 0; //sets kelvin to 0
        }
        
        TemperatureConverter(double temp) //overloaded constructor
        {
            if (temp < 0) //if kelvin value is less that 0...
            {
                kelvin_ = 0; //kelvin value is 0
            }
            else { //if kelvin value is greater than 0
                kelvin_ = temp;//accepts the kelvin value
            }
        }
        
        void SetTempFromKelvin(double input_k) //accepts a kelvin value and stores it
        {
            if (input_k < 0) //if inputed value is less than 0..
            {
                kelvin_ = 0;// kelvin value is 0
            }
            else {
                kelvin_ = input_k; //otherwise kelvin value is inputed value
            }
        }
        
        double GetTempFromKelvin() //returns kelvin value
        {
            return kelvin_;
        }
        
        void SetTempFromCelsius(double input_c) //accepts inputed value
        {
            double celsius = 0; //variable for celsius
            
            if (input_c < -273.15) //if inputed value is less than -273.15
            {
                celsius = -273.15; //celsius value is -273.15
            }
            else {
                celsius = input_c; //otherwise celsius value is inputed value
            }
            
            kelvin_ = celsius + 273.15; //kelvin value is celsius value + 273.15
        }
        
        double GetTempAsCelsius() //returns the celsius value
        {
            return kelvin_ - 273.15; //celsius is kelvin value - 273.15
        }
        
        void SetTempFromFahrenheit(double input_f) //accepts inputed value
        {
            double fahrenheit = 0;
            double celsius = 0;
            
            if (input_f < -459.67) // if inputed value is less than -459.67
            {
                fahrenheit = -459.67; // fahrenheit value is-459.67
            }
            else {
                fahrenheit = input_f; //otherwise fahrenheit value is inputed value
            }
            
            kelvin_ = (5 * (fahrenheit - 32) / 9) + 273.15; //kelvin value calc
        }
        
        double GetTempAsFahrenheit() //returns fahrenheit value
        {
            return ((kelvin_ - 273.15) * 9) / 5 + 32;
        }
        
        double PrintTemperatures() //prints kelvin, celsius, and fahrenheit values
        {
            cout << "Kelvin: " << GetTempFromKelvin() << endl;
            cout << "Celsius: " << GetTempAsCelsius() << endl;
            cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
        }
};
 

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}

/*
Kelvin: 0
Celsius: -273.15
Fahrenheit: -459.67
Kelvin: 274
Celsius: 0.85
Fahrenheit: 33.53
400.15
Kelvin: 400.15
Celsius: 127
Fahrenheit: 260.6
32
Kelvin: 305.15
Celsius: 32
Fahrenheit: 89.6
32
Kelvin: 273.15
Celsius: 0
Fahrenheit: 32
*/