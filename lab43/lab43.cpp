//Created by Coral Dixon on November 8th 2017
/*This program is supposed to simulate an online store catalog where the user can
input the item number, number of items, check out of the store, and recieve a receipt of their
items purchased. Every time an item is added to the cart, the stock is subtracted from
the catalog.
*/

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

class OnlineStore
{
    private:
        int stock[];
        double price[];
        string item[];
        double total_;
        int cart[];
    
    public:
        OnlineStore()
        {
            int const size = 10;
            stock[size];
            item[size];
            price[size];
    
        }
        
        void SetItems() 
        {
            item[0] = " Black Eyeliner        ";
            item[1] = " Brown Eyeliner        ";
            item[2] = " Eyeshadow Pallette    ";
            item[3] = " Beige Foundation      ";
            item[4] = " Black Mascara         ";
            item[5] = " Highlighter           ";
            item[6] = " Red Lipstick          ";
            item[7] = " Black Lipstick        ";
            item[8] = " Blush                 ";
            item[9] = "Fake Eyelashes        ";
            
            return;
        }
        
        void SetPrice() 
        {
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
            
            return;
        }
        
        void SetStock()
        {
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
            
            return;
        }
        
        void UserCart(int item_number, int amount)
        {
            
            for (int i = 0; i < size; i++) {
        
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
                    
                    cout << i + 1 << ". " << item[i] << "   " << stock[i] << "   $" << price[i] << endl;
                    
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
                }
        
};


int main()
{
    OnlineStore store[10];
    
    
    for (int i = 0; i < 10; i++) {
            
            store[i].SetItems();
            store[i].SetStock(); 
            store[i].SetPrice();
            
        }

}