//Program created by Coral Dixon on November 6th 2017
/*This program creates a class called ArrayTools which determines information
about an integer array based on the functions called in the main. Shows the arrays
min and max. Odd and even numbers.*/

#include <iostream>
#include <string>
using namespace std;

class ArrayTools { //creates a class of various array tools
    public:
        ArrayTools(int myArray[], int size); //overload constructor
        void Print() const; //prints out the array of size
        int Find_min(int _myArray[], int _size) const; //prototype for find min function
        //int Find_max(int _myArray[], int _size) const;
        int Find_sum(); //prototype for the sum of the array numbers
        int Nums_even_and_odd(); //prototype for odd/even print out function
        int Search (int find); //prototype for the search function
    
    private:
        int _size;
        int _myArray[];

};

//overloaded constructor
ArrayTools::ArrayTools(int myArray[], int size) {
    for (int i = 0; i < size; i++) {
        _myArray[i] = myArray[i];
    }
    _size = size;
    return;
}

//Finds a specific number in the array
int ArrayTools::Search(int find){
    // SEARCH FOR A VALUE WITHIN AN ARRAY
    bool flag = false;
    for (int i = 0; i < _size; ++i) {
        if (_myArray[i] == find) {
            flag = true;
            return i; 
        }
    }
    return -1;
}
//Finds the sum of the array numbers
int ArrayTools::Find_sum() {
    //finds the sum of the array
    int sum = 0;
    for(int i = 0; i < _size; i++) {
        sum = sum + _myArray[i];
    }    
    return sum;
}
//Finds the min num of the array
int ArrayTools::Find_min(int myArray[], int size) const {
    
    int min = _myArray[0];
    
    //For loop that finds minimum and maximum number
    for(int i=0; i<_size; i++) {
      if(min > _myArray[i]) {
         min = _myArray[i];
        }
    }
    return min;
}

//Function that lists all the odds and evens
int ArrayTools::Nums_even_and_odd() {
    // FINDING THE EVENS
    cout <<"The Even Numbers Are: ";
    
    for (int i = 0; i<_size; i++) {
        if (_myArray[i] % 2 == 0) {
            cout << "  " << _myArray[i];
        }
    }
    cout << endl;
    //FINDING THE ODDS
    cout << "The Odd Numbers Are: ";
    for (int i = 0; i < _size; i++) {
        if (_myArray[i] % 2 != 0) {
            cout << "  " << _myArray[i];
        }
    }
}

//Prints the numbers entered by user in order
void ArrayTools::Print() const { //print function
    cout << endl << "NUMBERS ENTERED: " << endl;

    for (int i = 0; i < _size; ++i) {
        cout << _myArray[i] << endl;
    }
    cout << "******************************" << endl;
    return;
}

int main () {
    const int size = 10;
    int myArray[size];

    //user input for the arrays
    for (int i = 0; i<size; i++) {
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray, size);
    
    a.Print();
    cout << "Min: " << a.Find_min(0, 4) << endl;
    cout << "Sum = " << a.Find_sum() << endl; 
    cout<<"Search 10"<<a.Search(10)<<endl;
    
    a.Nums_even_and_odd();
    
    return 0;
}



/* 

1 2 3 4 5 6 7 8 9 10

NUMBERS ENTERED: 
1
2
3
4
5
6
7
8
9
10
******************************
Min: 1
Sum = 55
Search 109
The Even Numbers Are:   2  4  6  8  10
The Odd Numbers Are:   1  3  5  7  9

*/