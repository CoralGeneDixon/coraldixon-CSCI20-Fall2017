// Read in a series of grades, terminated by a -1. 
// Then output the average and minimum of those grades.  
#include <iostream>
#include <cmath>
using namespace std;

class TemperatureConverter
{
    private:
        double kelvin_;
        
    public:
        TemperatureConverter()
        {
            kelvin_ = 0;
        }
        
        TemperatureConverter(double temp)
        {
            if (temp < 0)
            {
                kelvin_ = 0;
            }
            else {
                kelvin_ = temp;
            }
        }
        
        void SetTempFromKelvin(double input_k)
        {
            if (input_k < 0)
            {
                kelvin_ = 0;
            }
            else {
                kelvin_ = input_k;
            }
        }
        
        double GetTempFromKelvin()
        {
            return kelvin_;
        }
        
        void SetTempFromCelsius(double input_c)
        {
            double celsius = 0;
            
            if (input_c < -273.15)
            {
                celsius = -273.15;
            }
            else {
                celsius = input_c;
            }
            
            kelvin_ = celsius + 273.15;
        }
        
        double GetTempAsCelsius()
        {
            return kelvin_ - 273.15;
        }
        
        void SetTempFromFahrenheit(double input_f)
        {
            double fahrenheit = 0;
            double celsius = 0;
            
            if (input_f < -459.67)
            {
                fahrenheit = -459.67;
            }
            else {
                fahrenheit = input_f;
            }
            
            kelvin_ = (5 * (fahrenheit - 32) / 9) + 273.15;
        }
        
        double GetTempAsFahrenheit()
        {
            return ((kelvin_ - 273.15) * 9) / 5 + 32;
        }
        
        double PrintTemperatures()
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