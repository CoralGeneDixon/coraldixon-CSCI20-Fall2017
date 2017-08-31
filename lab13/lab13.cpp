/* Created: Coral Dixon___8/30/17
LAB 1.3: This program inputs a number of years and uses that data and current US poulation
information to estimate the future population for the entered # of years.*/


 #include <iostream>
 using namespace std;
 
 int main() {
     
     int current_population = 325770095;
     
     float birth_rate_sec = 8;
     float death_rate_sec = -12;
     float migrant_rate_sec = 33;
     int number_input;
     int future_population;
     
     float birth_rate_min = 60/birth_rate_sec;
     float death_rate_min = 60/death_rate_sec;
     float migrant_rate_min = 60/migrant_rate_sec;
     
     int birth_rate_year = 525600*birth_rate_min;
     int death_rate_year = 525600*death_rate_min;
     int migrant_rate_year = 525600*migrant_rate_min;
     
     
     cout << "Enter a number to calculate estimated future population of the US. ";
     cin >> number_input;
     
     number_input = number_input - 2017;
     future_population = current_population + ((number_input)*(birth_rate_year + death_rate_year + migrant_rate_year));
     
     cout << "In " << number_input + 2017 << " years, there will be " << future_population << " people living in the United States." << endl;
}