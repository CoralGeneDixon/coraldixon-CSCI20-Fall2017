/*This program was created by Coral Dixon on Oct 9 2017
The following program allows the user to input the radius of their well
in inches, and input the depth of their well in ft. It takes this input
and calculates the gallons of water that can be held in the well.
*/

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

//Universal variable. Constant for the value of pi
double pi_ = 3.1416;

//Class for calculating the volume of a cylinder and the gallons it holds
class WellVolume {
    //Public functions that will be used for user input
    public:
    void SetRadius(double radius_);
    void SetDepth(double depth_);
    double GetVolume();
    void Print() {
        cout << "Gallons: " << GetVolume() << endl;
    }
    
    //Private variables used for the user input
    private:
    double radius_in_;
    double depth_ft_;
};
//Allows user to set the radius of their well in inches
void WellVolume::SetRadius(double radius_) {
    radius_in_ = radius_;
    return;
}
//Allows user to set the depth of their well in feet
void WellVolume::SetDepth(double depth_) {
    depth_ft_ = depth_;
    return;
}
//Calculates the volume of the well using the depth and radius.
//Calculates the amount of gallons held by the well
double WellVolume::GetVolume() {
    double radius_ft = 0.0;
    double volume = 0.0;
    double gallons = 0.0;
    double cubic_ft = 0.0;
    
    radius_ft = radius_in_ / 12.0; //Converts radius inches into feet
    volume = pow(radius_ft, 2) * pi_ * depth_ft_; //Calculates the volume using feet
    
    gallons = volume * 7.4805; //Calculates the gallons by multiplying by how many gallons are held in one square foot
    
    return gallons; //Returns the value for gallons
}

int main() {
    double radius_input = 0.0;
    double depth_input = 0.0;
    
    WellVolume well1; //Object for well input
    
    cout << "Input your wells radius as a decimal in inches: ";
    cin >> radius_input;
    cout << endl;
    cout << "Input your wells depth as a decimal in feet: ";
    cin >> depth_input;
    cout << endl;
    
    well1.SetRadius(radius_input); //Call to set the user radius
    well1.SetDepth(depth_input); //Call to set the user depth
    
    well1.Print(); //Call to print the amount of gallons calculated
    
    return 0;
}

/*
Input your wells radius as a decimal in inches: 3.0

Input your wells depth as a decimal in feet: 300

Gallons: 440.639


Input your wells radius as a decimal in inches: 80.0

Input your wells depth as a decimal in feet: 464.0

Gallons: 484637


Input your wells radius as a decimal in inches: 67

Input your wells depth as a decimal in feet: 382

Gallons: 279854


Input your wells radius as a decimal in inches: 456

Input your wells depth as a decimal in feet: 153

Gallons: 5.19207e+06


Input your wells radius as a decimal in inches: 75

Input your wells depth as a decimal in feet: 366

Gallons: 335987


Input your wells radius as a decimal in inches: 11

Input your wells depth as a decimal in feet: 333

Gallons: 6575.8


Input your wells radius as a decimal in inches: 8

Input your wells depth as a decimal in feet: 205

Gallons: 2141.18


Input your wells radius as a decimal in inches: 10

Input your wells depth as a decimal in feet: 83

Gallons: 1354.56


Running /home/ubuntu/workspace/Assignments/assign2.cpp
Input your wells radius as a decimal in inches: 31

Input your wells depth as a decimal in feet: 98

Gallons: 15369.8


Input your wells radius as a decimal in inches: 56

Input your wells depth as a decimal in feet: 261

Gallons: 133578


Input your wells radius as a decimal in inches: 28

Input your wells depth as a decimal in feet: 109

Gallons: 13946.4





*/
