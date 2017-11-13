//Created by Coral Dixon on 11/5/2017
/*The program is a Hi Ho! Cherry-O game. The user plays against an NPC
to see who can get 10 cherries first. The player and computer
take turns using the spinner, which is a random number generator. The random number 
generated determines if player loses cherries or gain
cherries for their basket.*/

#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;

class Computer { //NPC Class controls the NPC AI
    
    public:
    //Public functions
    void SetTree(int cherries_tree); //Mutator
    int const GetTree(); //Accessor 
    
    void SetCherries(int cherries_basket); //Mutator
    int const GetCherries(); //Accessor
    
    private:
    //private class variables
    int tree_;
    int basket_;
    
};
//Function that sets the # of cherries on NPC tree
void Computer::SetTree(int cherries_tree) {
    
    tree_ = cherries_tree;
    return;
}
//Function that gets the # of cherries on NPC tree
int const Computer::GetTree() {
    
    return tree_;
}
//Function that sets the # of cherries in the NPC basket
void Computer::SetCherries(int cherries_basket) {
    
    basket_ = cherries_basket;
    return;
}
//Function that gets the # of cherries in the NPC basket
int const Computer::GetCherries() {
    
    return basket_;
}


int main() {
    
    Computer npc1; //Initializes NPC class
    npc1.SetCherries(0); //Sets # of cherries in NPC basket
    npc1.SetTree(10); //Sets # of cherries on NPC tree
    
    srand(time(0)); //Seed for current time
    
    int player_tree = 10; //Sets # of cherries on players tree
    int player_basket = 0; //Sets # of cherries in players basket
    
    int spin = 0; //Variable for spinning
    int number_turns = 0; //variable that incriments to track turns
    
    cout << "You're playing Hi Ho! Cherry-O!" << endl; //Start of Game
    cout << "Collect 10 cherries to win!" << endl;
    cout << endl;
    cout << endl;
    
    while ((npc1.GetCherries() < 10) && (player_basket < 10)) { //Main loop which repeats until 10 cherries are in basket
        
        if (number_turns % 2 == 0) { //modulo # to determine whos turn it is
            
            cout << endl;
            cout << "You're up! Press enter to spin!"; //Spinning for random #
            cin.ignore();
        
        
        spin = rand() % 7 + 1;  //Random # generator between 1 - 7
        
        cout << "You spun a : " << spin << endl; //Tells player what he spun
        
        switch (spin) { //Switch statement for player that takes determined random # generated and implements moves each turn
            
            case 1: //If #1 is spun, one cherry is taken from tree and added to players basket
            cout << "Take one cherry" << endl;
            player_tree = player_tree - 1;
            player_basket = player_basket + 1;
            break;
            
            case 2: //If #2 is spun, two cherries are taken from tree and added to players basket
            cout << "Take two cherries" << endl;
            player_tree = player_tree - 2;
            player_basket = player_basket + 2;
            break;
            
            case 3: //If #3 is spun, three cherries are taken from tree and added to players basket
            cout << "Take three cherries" << endl;
            player_tree = player_tree - 3;
            player_basket = player_basket + 3;
            break;
            
            case 4: //If #4 is spun, four cherries are taken from tree and added to players basket
            cout << "Take four cherries" << endl;
            player_tree = player_tree - 4;
            player_basket = player_basket + 4;
            break;
            
            case 5: //If #5 is spun, a 'DOG' is spun, and 2 cherries are added to the tree, and taken from the players basket
            cout << "DOG!" << endl;
            
            //If else statement that is determined by players current amount of cherries in bucket
            if (player_basket >= 2) { //If players basket has 2 cherries or more, 2 cherries are taken from basket and added to the tree
                
                player_basket = player_basket - 2;
                player_tree = player_tree +2;
                
            }
            
            else if (player_basket == 1) { //If the players basket only has 1 cherry, 1 cherry is taken from the basket and added to the tree
                
                player_basket = player_basket  - 1;
                player_tree = player_tree + 1;
                
            }
            else { //If the player has 0 or less cherries in their basket, the cherries in basket = 0 and the cherries on tree = 10
                player_basket = 0;
                player_tree = 10;
            }
            
            case 6: //If #6 is spun, six cherries are taken from tree and added to players basket
            cout << "Take six cherries" << endl;
            player_tree = player_tree - 6;
            player_basket = player_basket + 6;
            break;
            
            case 7: //If #7 is spun, then players has split their basket and their basket is reset to 0 and their tree to 10.
            cout << "SPILT THE BASKET!" << endl;
            player_basket = 0;
            player_tree = 10;
            break;
        }
    }
        
        else if (number_turns % 2 == 1) { //NPC turn
            cout << endl;
            cout << "It's the computers turn!" << endl;
            
            spin = rand() % 7 + 1; //Spin variable. Random number generator
            
            cout << "The computer spun a : " << spin << endl;
            
            switch (spin) { //Switch statement for NPC that takes determined random # generated and implements moves each turn
                
            case 1: //If #1 is spun, one cherry is taken from tree and added to NPC's basket
            cout << "Take one cherry from the tree" << endl;
            npc1.SetTree(npc1.GetTree() - 1);
            npc1.SetCherries(npc1.GetCherries() + 1);
            break;
            
            case 2: //If #2 is spun, two cherries are taken from tree and added to NPC's basket
            cout << "Take two cherries from the tree" << endl;
            npc1.SetTree(npc1.GetTree() - 2);
            npc1.SetCherries(npc1.GetCherries() + 2);
            break;
            
            case 3: //If #2 is spun, two cherries are taken from tree and added to NPC's basket
            cout << "Take three cherries from the tree" << endl;
            npc1.SetTree(npc1.GetTree() - 3);
            npc1.SetCherries(npc1.GetCherries() + 3);
            break;
            
            case 4: //If #3 is spun, three cherries are taken from tree and added to NPC's basket
            cout << "Take four cherries from the tree" << endl;
            npc1.SetTree(npc1.GetTree() - 4);
            npc1.SetCherries(npc1.GetCherries() + 4);
            break;
            
            case 5: //If #5 is spun, a 'DOG' is spun, and 2 cherries are added to the tree, and taken from the NPC's basket
            cout << "DOG!" << endl;
            
            //If else statement that is determined by NPC's current amount of cherries in bucket
            if (npc1.GetCherries() >= 2) { //If NPC's basket has 2 cherries or more, 2 cherries are taken from basket and added to the tree
                
                npc1.SetCherries(npc1.GetCherries() - 2);
                npc1.SetTree(npc1.GetTree() + 2);
            }
            
            else if (npc1.GetCherries() == 1) { //If the NPC's basket only has 1 cherry, 1 cherry is taken from the basket and added to the tree
                
                
                npc1.SetCherries(npc1.GetCherries() - 1);
                npc1.SetTree(npc1.GetTree() + 1);
            }
            else { //If the NPC has 0 or less cherries in their basket, the cherries in basket = 0 and the cherries on tree = 10
                npc1.SetCherries(0);
                npc1.SetTree(10);
            }
            
            case 6: //If #6 is spun, six cherries are taken from tree and added to NPC's basket
            cout << "Take six cherries from the tree" << endl;
            npc1.SetTree(npc1.GetTree() - 6);
            npc1.SetCherries(npc1.GetCherries() + 6);
            break;
            
            case 7: //If #7 is spun, then players has split their basket and their basket is reset to 0 and their tree to 10.
            cout << "SPILT THE BASKET!" << endl;
            npc1.SetCherries(0);
            npc1.SetTree(10);
            break;
            }
        }
        number_turns++; //Increments turn so that the program goes between the NPC's turn and players turn
        
        cout << endl;
        cout << "You have : " << player_basket << " Cherries!" << endl; //Displays amount of cherries in players basket
        cout << "Computer has : " << npc1.GetCherries() << " Cherries!" << endl; //Displays amount of cherries in NPC's basket
    }
    
    if (player_basket >= 10) { //If players basket is greater than or = to 10, the player wins and the following statement is printed
        
        cout << "Congrats! You Win!" << endl;
    }
    
    else if(npc1.GetCherries() >= 10) { //If NPC's basket is greater than or = to 10, the NPC wins and the following statement is printed
        
        cout << "The Computer won! :( " << endl;
        
    }

    return 0;
}

/*

 You're playing Hi Ho! Cherry-O!
Collect 10 cherries to win!



You're up! Press enter to spin!
You spun a : 6
Take six cherries

You have : 6 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 1
Take one cherry from the tree

You have : 6 Cherries!
Computer has : 1 Cherries!

You're up! Press enter to spin!
You spun a : 1
Take one cherry

You have : 7 Cherries!
Computer has : 1 Cherries!

It's the computers turn!
The computer spun a : 6
Take six cherries from the tree

You have : 7 Cherries!
Computer has : 7 Cherries!

You're up! Press enter to spin!
You spun a : 6
Take six cherries

You have : 13 Cherries!
Computer has : 7 Cherries!
Congrats! You Win!

*/