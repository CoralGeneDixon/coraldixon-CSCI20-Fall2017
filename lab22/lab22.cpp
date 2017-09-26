/* This program was created by Coral Dixon on Sept 25 2017
The program generates a random number between 1-100 when ran.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void RandomNumber() { //Function that generates a random # between 1-100
    int seed_val = 0;
    int ran_num;
    
    srand(seed_val);
    ran_num = (rand() % 100) + 1; //1 to 100
    
    cout << ran_num << endl; //generates random #
    
    return;
}

int main() {
    RandomNumber(); //function call
    
    return 0;
}