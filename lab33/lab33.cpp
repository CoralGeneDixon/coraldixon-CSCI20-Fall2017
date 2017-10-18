#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber() { //Function that generates a random # between 1-100
    int ran_num = 0;
    
    srand(time(0));
    ran_num = (rand() % 50) + 1; //1 to 50
    
    return ran_num;
}

int main() {
    int ran_num = RandomNumber();
    string high = "Too High. Try Again: ";
    string low = "Too Low. Try Again: ";
    string win = "Just Right! You win!";
    int user_num = 0;
    
    cout << "Enter a random number between 1-50: ";
    cin >> user_num;
    cout << endl;
    
    for (int i = 5; i >= 0; --i) {
        cout << i << endl;
    }
    
    cout << endl;
    
    while (user_num != ran_num) {
        if((user_num >= 1) && (user_num <= 50)) {
            if(user_num < ran_num) {
                cout << low;
                cin >> user_num;
            }
            else if(user_num > ran_num) {
                cout << high;
                cin >> user_num;
            }
        }
        else {
            cout << "Invald. Re-enter number: ";
            cin >> user_num;
        }
    }
    
    cout << win;
    
    return 0;
}