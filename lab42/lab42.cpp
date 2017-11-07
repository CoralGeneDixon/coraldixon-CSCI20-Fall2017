//This program was created by Coral Dixon on November 6th 2017
/*This program creates a virtual makeup store. The program keeps track of the amount of items and their prices. 
Items are removed from the store list when the user adds them to their cart. The price is added to users total. 
If the user enters 0 it acts the same as checkingout. The program will print the total cost of purchased items, 
and a list of the items purchased.*/

#include<iostream>
using namespace std;

int main() {
    
    string makeup[10]; //Array for item names
    int stock[10]; //Array for item amount in stock
    int cart[10]; //Array for cart item number
    double price[10]; //Array for item prices
    int item_number = 11; //Variable for the item number 
    int amount = 0;
    double total = 0.0;
    
    
    makeup[0] = " Black Eyeliner        ";
    makeup[1] = " Brown Eyeliner        ";
    makeup[2] = " Eyeshadow Pallette    ";
    makeup[3] = " Beige Foundation      ";
    makeup[4] = " Black Mascara         ";
    makeup[5] = " Highlighter           ";
    makeup[6] = " Red Lipstick          ";
    makeup[7] = " Black Lipstick        ";
    makeup[8] = " Blush                 ";
    makeup[9] = "Fake Eyelashes        ";
    
    
    stock[0] = 3;
    stock[1] = 5;
    stock[2] = 9;
    stock[3] = 2;
    stock[4] = 3;
    stock[5] = 0;
    stock[6] = 1;
    stock[7] = 6;
    stock[8] = 8;
    stock[9] = 4;
    
    
    price[0] = 5.99;
    price[1] = 5.99;
    price[2] = 12.50;
    price[3] = 10.75;
    price[4] = 7.00;
    price[5] = 5.00;
    price[6] = 3.75;
    price[7] = 3.75;
    price[8] = 2.50;
    price[9] = 7.75;
    
    //For loop that increments the cart # by 1 up to 10 and stores each array spot as 0
    for (int i = 0; i < 10; i++) {
        
        cart[i] = 0;
    }
    
    
    //While loop that runs the store catalog, and allows user input as long as the item_number enter is not 0
    while (item_number != 0) {
        
        cout << endl;
        cout << "Welcome to Coral's Online Makeup Store!" << endl;
        cout << "When you finish browsing our items, enter the item number to add it to your cart!" << endl;
        cout << "Enter 0 to checkout." << endl;
        cout << endl;
        cout << "#   NAME                  STOCK  PRICE" << endl;
        cout << "________________________________________" << endl;
        
        
        //For loop that numbers the items up to 10 and prints their name, stock amount, item number, and price.
        for (int i = 0; i < 10; i++) {
            
            cout << i + 1 << ". " << makeup[i] << "   " << stock[i] << "   $" << price[i] << endl;
            
        }
        
        cout << endl;
        //User input for item_number
        cout << "ENTER ITEM #: ";
        cin >> item_number;
        
        if ((item_number >= 1) && (item_number <=10)) { //If the item_number is between 1 and 10 (inclusive) then allow user to input the amount of items they want to buy
            
            cout << "ENTER AMOUNT: ";
            cin >> amount;
            
            if (stock[item_number - 1] - amount < 0) { //If statement that gives the user an out of stock message is the purchase amount entered causes the stock amount to go below 0
                
                cout << "NOT ENOUGH IN STOCK. RE-ENTER." << endl;
                cout << endl;
                
                amount = 0; //The new amount value will be set to 0
                item_number = 11; //The item number is also reset
                
            }
        
            else { //If the item amount entered is subracted from the current stock amount and the amount is not below 0
            
            stock[item_number - 1] = stock[item_number - 1] - amount; //The new stock amount is the old stock amount minus the amount purchased
            cart[item_number - 1] = cart[item_number - 1] + amount; //The cart is updated to reflect the added item amount
            
            total = total + (amount * price[item_number - 1]); //The total is changed to the previous total amount plus the price times the amount of the item purchased
            amount = 0; //Reset amount to 0
            item_number = 11; //Reset the item number
            
        }
    }
    
    else if (item_number == 0) { //Checks out the users cart if 0 is entered
            
            break;
            
            }
    
    else //If any input less than 0 and greater than 10 for item number is inputed, then the following message is displayed
    {
        cout << "INVALID INPUT. PLEASE RESTART AND TRY AGAIN" << endl;
    }
    
}

//Output for users receipt
cout << endl;
cout << "#   NAME                  STOCK  PRICE" << endl;
cout << "________________________________________" << endl;

//For loop that prints the items purchased and not purchsed by item number, item name, amount purchased, and price charged.
for (int i = 0; i < 10; i++) {
    
    cout << i + 1 << ". " << makeup[i] << "   " << cart[i] << "   $" << price[i] << endl;
    
}

cout << endl;
//Prints total amount charged to user
cout << "Total Amount: $" << total << endl;

}

/*

Welcome to Coral's Online Makeup Store!
When you finish browsing our items, enter the item number to add it to your cart!
Enter 0 to checkout.

#   NAME                  STOCK  PRICE
________________________________________
1.  Black Eyeliner           3   $5.99
2.  Brown Eyeliner           5   $5.99
3.  Eyeshadow Pallette       9   $12.5
4.  Beige Foundation         2   $10.75
5.  Black Mascara            3   $7
6.  Highlighter              0   $5
7.  Red Lipstick             1   $3.75
8.  Black Lipstick           6   $3.75
9.  Blush                    8   $2.5
10. Fake Eyelashes           4   $7.75

ENTER ITEM #: 10
ENTER AMOUNT: 1

Welcome to Coral's Online Makeup Store!
When you finish browsing our items, enter the item number to add it to your cart!
Enter 0 to checkout.

#   NAME                  STOCK  PRICE
________________________________________
1.  Black Eyeliner           3   $5.99
2.  Brown Eyeliner           5   $5.99
3.  Eyeshadow Pallette       9   $12.5
4.  Beige Foundation         2   $10.75
5.  Black Mascara            3   $7
6.  Highlighter              0   $5
7.  Red Lipstick             1   $3.75
8.  Black Lipstick           6   $3.75
9.  Blush                    8   $2.5
10. Fake Eyelashes           3   $7.75

ENTER ITEM #: 0

#   NAME                  STOCK  PRICE
________________________________________
1.  Black Eyeliner           0   $5.99
2.  Brown Eyeliner           0   $5.99
3.  Eyeshadow Pallette       0   $12.5
4.  Beige Foundation         0   $10.75
5.  Black Mascara            0   $7
6.  Highlighter              0   $5
7.  Red Lipstick             0   $3.75
8.  Black Lipstick           0   $3.75
9.  Blush                    0   $2.5
10. Fake Eyelashes           1   $7.75

Total Amount: $7.75

*/