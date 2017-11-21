//This program was created by Coral Dixon on November 20 2017
/*
The program reads 3 student's grades, units, and names from a filestream, and outputs
the information in an HTML format. 
*/


#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main() {
    
    ifstream inFS; //ifstream file input object
    ofstream outFS; //ifstream file output object
    
    
    const int SIZE = 99; //Array size variable
    
    double gpa_one = 0.0; //GPA variable
    double gpa_two = 0.0; //GPA variable
    double gpa_three = 0.0; //GPA variable
    
    string first_name[SIZE]; //Student first name array declaration
    string last_name[SIZE]; //Student last name array declaration
    
    int num_class[SIZE]; //Number of classes attended by student array declaration
    int ttl_hrs[SIZE]; //Total number of hours attended by student array declaration
    
    int cls_hrs_one[SIZE]; //Class hours for first person array declaration
    int cls_hrs_two[SIZE]; //Class hours for second person array declaration
    int cls_hrs_three[SIZE]; //Class hours for third person array declaration
    
    char grade_one[SIZE]; //First persons grade array declaration
    char grade_two[SIZE]; //Second persons grade array declaration
    char grade_three[SIZE]; //Third persons grade array declaration
    
    int credits_one = 0; //First persons credits for class array declaration
    int credits_two = 0; //Second persons credits for class array declaration
    int credits_three = 0; //Third persons credits for class array declaration
    
    
    inFS.open("input.txt"); //Opens the file input.txt
    
    if (!inFS.is_open()) 
    { //If the file input.txt does not open...
        
        cout << "Could not open file input.txt" << endl; //...print warning for user.
        
        return 1;
    } 
    
    else 
    { //If the file input.txt DOES open...
        
        cout << "input.txt has opened" << endl; //...print verification
    }
        
        
    //Student 1 Input
        
    inFS >> first_name[0]; //File input for students first name
    inFS >> last_name[0]; //File input for students last name
    inFS >> num_class[0]; //File input for students number of classes
        
    //For loop that accesses the array for cls_hrs and grade and generates the number of class hours for student 1 and their grade for each class
    for (int i = 0; i < num_class[0]; ++i) 
    { //If i is lessthan num_class add 1 to the arrays
            
        inFS >> cls_hrs_one[i]; //File input for class hours for student 1
        inFS >> grade_one[i]; //File input for grades for each class for student 1
            
    }
    
    cout << first_name[0] << " " << last_name[0] << endl; //Print student 1 first and last name
    cout << num_class[0] << endl; //Print student 1 number of classes
            
    //For loop that accesses the array for cls_hrs and grade and generates the number of class hours for student 1 and thier grade for each class
    for (int i = 0; i < num_class[0]; ++i) 
    { //If i is less than num_class add 1 to the arrays
                
        cout << cls_hrs_one[i] << " " << grade_one[i] << endl; //Print class hours and grades for student 1
    
    }
    
    //For loop calculating total amount of hours to be used to find GPA
    for (int i = 0; i < num_class[0]; ++i) 
    { //As long as i is less than num_class array...
                
        ttl_hrs[0] = ttl_hrs[0] + cls_hrs_one[i]; //...Changes the value of ttl_hrs array to ttl_hrs + the cls_hrs_one value.
                
    }
            
    credits_one = ttl_hrs[0]; //Reassigns credits_one value to ttl_hrs value
            
    
    //Student 2 Input
            
    inFS >> first_name[1]; //File input for student first name
    inFS >> last_name[1]; //File input for student last name
    inFS >> num_class[1]; //File input for student number of classes
            
    //For loop that accesses the array for cls_hrs and grade and generates the number of class hours for student 2 and their grade for each class
    for (int i = 0; i < num_class[1]; ++i) 
    {//If i is lessthan num_class add 2 to the arrays
                
        inFS >> cls_hrs_two[i]; //File input for class hours for student 2
        inFS >> grade_two[i]; //File input for grades for each class for student 2
                
    }
            
    cout << first_name[1] << " " << last_name[1] << endl; //Print student 2 first and last name
    cout << num_class[1] << endl; //Print student 2 number of classes
    
    //For loop that accesses the array for cls_hrs and grade and generates the number of class hours for student 2 and thier grade for each class        
    for (int i = 0; i < num_class[1]; ++i) 
    {//If i is less than num_class add 1 to the arrays
                
        cout << cls_hrs_two[i] << " " << grade_two[i] << endl; //Print class hours and grades for student 2
                
    } 
            
    //For loop calculating total amount of hours to be used to find GPA
    for (int i = 0; i < num_class[1]; ++i) 
    {//As long as i is less than num_class array..
                
        ttl_hrs[1] = ttl_hrs[1] + cls_hrs_two[i]; //...Changes the value of ttl_hrs array to ttl_hrs + the cls_hrs_one value.
                
    }
            
    credits_two = ttl_hrs[1]; //Reassigns credits_one value to ttl_hrs value
            
            
    //Student 3 Input
            
    inFS >> first_name[2]; //File input for students first name
    inFS >> last_name[2]; //File input for students last name
    inFS >> num_class[2]; //File input for students number of classes
            
    //For loop that accesses the array for cls_hrs and grade and generates the number of class hours for student 3 and their grade for each class
    for (int i = 0; i < num_class[2]; ++i) 
    {//If i is lessthan num_class add 1 to the arrays
                
        inFS >> cls_hrs_three[i]; //File input for class hours for student 3
        inFS >> grade_three[i]; //File input for grades for each class for student 3
            
    }
            
    cout << first_name[2] << " " << last_name[2] << endl; //Print student 3 first and last name
    cout << num_class[2] << endl; //Print student 3 number of classes
            
    //For loop that accesses the array for cls_hrs and grade and generates the number of class hours for student 3 and their grade for each class
    for (int i = 0; i < num_class[2]; ++i) 
    {//If i is less than num_class add 1 to the arrays
                
        cout << cls_hrs_three[i] << " " << grade_three[i] << endl; //Print class hours and grades for student 3
                
    }
            
    //For loop calculating total amount of hours to be used to find GPA
    for (int i = 0; i < num_class[2]; ++i) 
    {//As long as i is less than num_class array...
                
        ttl_hrs[2] = ttl_hrs[2] + cls_hrs_three[i]; //...Changes the value of ttl_hrs array to ttl_hrs + the cls_hrs_one value.
                
    }
            
    credits_three = ttl_hrs[2]; //Reassigns credits_one value to ttl_hrs value
                
    //Opening output HTML file
    outFS.open("output.html"); //Opens the filestream
                
    outFS << "<!DOCTYPE html>" << endl; //Declares HTML
    outFS << "<html>" << endl;//HTML heading
    outFS << "<head>" << endl;//Starts heading
    outFS << "<title>Student Transcripts</title>" << endl; 
    outFS << "</head>" << endl; //Ends heading
    outFS << "<body>" << endl; //Starts body
                
    //Sending first students information to the HTML file
    outFS << "<h3>" << first_name[0] << " " << last_name[0] << ":" << "</h3>" << endl; //Prints first and last name
    outFS << endl; //Spacing
    outFS << "<h2>" << "Total Possible Credits: " << ttl_hrs[0] << "</h2>" << endl; //Heading 2 prints total possible credits
    outFS << "<h2>" << "Total Credits Earned: " << credits_one << "</h2" << endl; //Heading 2 prints credits
    outFS << endl;
    outFS << endl;
                
    //Sending second students information to the HTML file
    outFS << "<h3>" << first_name[1] << " " << last_name[1] << ":" << "</h3>" << endl; //Prints student 3 first and last name
    outFS << endl;
    outFS << "<h2>" << "Total Possible Credits: " << ttl_hrs[0] << "</h2>" << endl; //Heading 2 prints total possible credits
    outFS << "<h2>" << "Total Credits Earned: " << credits_two << "</h2" << endl; //Heading 2 prints total credits
    outFS << endl;
    outFS << endl;
                
    //Sending third students information to the HTML file
    outFS << "<h3>" << first_name[2] << " " << last_name[2] << ":" << "</h3>" << endl; //Heading 3 prints first and lastn name
    outFS << endl;
    outFS << "<h2>" << "Total Possible Credits: " << ttl_hrs[2] << "</h2>" << endl; //Heading 2 prints total possible credits
    outFS << "<h2>" << "Total Credits Earned: " << credits_three << "</h2" << endl; //Heading 2 prints total credits
    outFS << endl;
    outFS << endl;
    
    outFS << "</body>" << endl;
    outFS << "</html>" << endl;
    
    //Closing .txt file        
    inFS.close();
    //Closing .html file
    outFS.close();
    
    return 0;
}