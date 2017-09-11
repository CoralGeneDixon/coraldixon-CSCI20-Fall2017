//This program was created by Coral Dixon for lab 1.5 on 
//September 11th 2017. The following program allows a user
//to input a set of 5 random nouns, and 2 adjectives.
//These words will be generated into a madlib.

 #include <iostream>
 #include <string>
 using namespace std;
 
 int main() {
//Variables for entered words
    string adj_one;
    string adj_two;
    string noun_one;
    string noun_two;
    string noun_three;
    string noun_four;
    string noun_five;
    
//User Input
    cout << "Enter 2 adjectives and 5 nouns in order." << endl; 
    cout << "No spaces. Tap ENTER to enter each word: " << endl;
    cin >> adj_one;
    cin >> adj_two; 
    cin >> noun_one;
    cin >> noun_two;
    cin >> noun_three;
    cin >> noun_four;
    cin >> noun_five;
    
//Program output/the madlib
    cout << "A vacation is when you take a trip to some *" << adj_one << " place with your *" << endl;
    cout << adj_two << " family. Usually you go to some place that is near a/an *" << noun_one << endl;
    cout << "or up on a/an *" << noun_two << ". A good vacation place is one where you can ride *" << noun_three << endl;
    cout << "or play *" << noun_four << " or go hunting for *" << noun_five << endl;
    
    
    return 0;
}