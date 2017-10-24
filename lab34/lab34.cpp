// Read in a series of grades, terminated by a -1. 
// Then output the average and minimum of those grades.  
#include <iostream>  
using namespace std;  
 
int main() {  

// Declare variables         
int count=0;         
int total=0;         
int minimum=0;
int grade=0;          

// Read numbers in until we see the -1         
// Sum up grades as we do, and look for minimum         

cout << "Enter grades: ";
cin >> grade;
minimum = grade;

while (grade != -1) {
        total = total + grade;
        count = count + 1;
        cin >> grade;

    if ((grade < minimum) && (grade != -1)) {                        
        minimum = grade;                
    }
}
 
 // Output results         
 double average = total / count;         
 cout << "Average was " << average << endl;         
 cout << "Minimum was " << minimum << endl;          
 
 return 0; 
     
 }
 
 /*
Enter grades: 97
92
86
91
-1
Average was 91
Minimum was 92
 */