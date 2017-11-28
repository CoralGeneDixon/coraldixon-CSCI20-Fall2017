/*
Program was created by April Browne. The program uses cstring arrays.
I had a hard time figuring out what it is supposed to do because of
all the errors. I'm guessing that the program is supposed to take 2
string entries, compare their lengths and equality, and then output 
those comparisons. I was also confused about why the program would subtract
from the array.

*/

#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0; //Variable that declares the length of the name array.
    char * name = new char[]; //A pointer variable that points to the information in the new array called char. This also creates the new array char.

    cout << "Please enter a 10 letter word or less" << endl; //Instructions for user input.
    cin >> name; //User input for the variable name, which is a word that is 10 letters or less

    char * head  = name; //A char pointer for the variable head that points to the info in the variable name.
    char * tail = name; //A char pointer for the variable tail that points to the info in the variable name. 
    //If no error, the above pointers are assigning head and tail variables the memory location held by the name variable.
    //ERROR: the name variable's are missing the &. The pointer is only pointing to the place in memory of the variable name, not it's content.
    nameLength = strlen(*name); //calculates the length of the word stored in the name variable. 

    cout << "Your word is " << firststr << endl; //Prints the word stored in variable firstst. 
    //ERROR: firststr variable was not declared.

    if (nameLength<10) //If nameLength is less than 10....
    {
         while (*head != '\0') //A while loop that checks to see if the characters in the c-string stored in the variable head do not equal a null
         {
                cout << *head; //If there is no null, then the program prints the contents in the variable head
                head++; //Moves down the array by 1 and checks the array for a null
                
         }
     }
     else //If nameLength is greater than 9...
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //Print a warning for the user.
     }

     cout << endl; //Spacing

     tail = &name[strlen(name) - 1]; //Assigns the array stored in name to the variable tail with a new array length that is the length of the name string entered minus 1
     //ERROR: tail needs to be *tail because it was originally defined as a pointer.
     
     if (nameLength < 10)  //If nameLength is less than 10....
     {
          while (tail != name) //Loop that checks that the array stored in the pointer tail does not equal the length of the array stored in name
          {//ERROR: tail needs to be *tail
                 cout << *tail; //Print the array stored in the pointer tail
                 tail--; //ERROR: Instead of moving forward in the array, it is trying to move backwards. Should be ++
          }
     }
     cout << endl; //Spacing

     head = name; //Assigns the variable head to the variable name.
     //ERROR: head needs to be *head
     tail = &name[strlen(name) - 1]; ////Assigns the array stored in name to the variable pointer head with a new array length that is the length of the name string entered minus 1
     //ERROR: tail needs to be *tail

     head++; //Add's 1 to the array stored in head
     tail--; //Add's 1 to the array stored in tail
     //ERROR: Both head and tail need to be *head and *tail

     if (*head == *tail) //If the word stored in head and tail are the same...
     {
         cout << "It is an palindrome!" << endl; //Print this message
     }
     else //If they are not the same...
     {
         cout << "It is not an palindrome" << endl; //Print this message
     }

     return 0; 
}