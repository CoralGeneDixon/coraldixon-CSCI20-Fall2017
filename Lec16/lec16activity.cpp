//Created By: Coral Dixon
 //Created On: 9/11/17
 
 #include <iostream>
 using namespace std;
 
 struct Monster{
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
  string name;
 };
 
 int main()
 {
   Monster goober;
   goober.name = "Goober";
   goober.head = "Franken";
   goober.eyes = "Wackus";
   goober.ears = "Wackus";
   goober.nose = "Wackus";
   goober.mouth = "Spritem";

   cout << "Name: " << goober.name << endl;
   cout << "Head: " << goober.head<< endl;
   cout << "Eyes: " << goober.eyes<< endl;
   cout << "Ears: " << goober.ears<< endl;
   cout << "Nose: " << goober.nose<< endl;
   cout << "Mouth: " << goober.mouth<< endl;
   
   
     
 }