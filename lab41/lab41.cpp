//Program created by Coral Dixon on November 6th 2017
/*This program creates a class called ArrayTools which determines information
about an integer array based on the functions called in the main. Shows the arrays
min and max. Odd and even numbers.*/

#include<iostream>
using namespace std;

class ArrayTools {
    private:
    //Class Variables
    int array[];
    
    public:

//Default Constructor for array and size
ArrayTools() {

    array[0];
}

//Overload Constructor based on user input
ArrayTools(int array_one[], int size) {
    
    int size_ = size;
    
    for (int i = 0; i <= size_; i++) {
        
        array[i] = array_one[i];
        
    }
}


void SetArray(int array_one[], int size) {
    
    int size_ = size;
    
    for (int i = 0; i <= size_; i++) {
        
        array[i] = array_one[i];
        
    }
}

int GetArray() {
    return array_one[i];
}

//Function that returns the minimum value within the ranges given
int Find_min(int min, int max) {
    
    int i = 0;
    int finding_min = array[min];
    
    for (int i = min; min <= max; min++) {
        
        if(array[min] <= finding_min) {
            
            finding_min = array[min];
        }
    }
    
    return finding_min;
}


//Function that returns the maximum values within the ranges given
int Find_max(int min,int max) {
    
    int finding_max = array[min];
    
    for (int i = min; min <= max; min++) {
        
        if(array[min] > finding_max) {
            
            finding_max = array[min];
        }
    }
    
    return finding_max;
}

//Function that returns the sum of all values in the array
int Find_sum() {
    
    int sum = 0;
    
    for (int i = 0; i < size_; i++) {
        
        sum += array[i];
    }
    
    return sum;
}

//Function that returns the amount of odd numbers stored in your array
int Num_odd() {
    
    int odd_ = 0;
    
    for (int i = 0; i < size_; i++) {
        
        if((array[i] % 2) == 1) {
            
            odd_++;
        }
    }
    
    return odd_;
}


//Function that returns the amount of even numbers stored in your array
int Num_even() {
    
    int even_ = 0;
    
    for (int i = 0; i < size_; i++) {
        
        if((array[i] % 2) == 0) {
            
            even_++;
        }
    }
    
    return even_;
}
        
//Function that searches the array for a specified value and returns its location     
int Search(int find_number) {
    
    int i;
    
    for (i = 0; i < size_; i++) {
        
        if(array[i] == find_number) {
            
            return i;
        }
        
        else {
            
            return -1;
        }
    }
}

//Function that checks to see if the array is sorted in ascending order
string Is_sorted() {
    
    string sorted = "";
    int max_val = array[0];
    int sort = 0;
    int i = 0;
    
    for (i = 0; i < size_; i++) {
        
        if(array[i] >= max_val) {
            
            sort++;
            
        }
        
    }
    
    if (sort >= 9) {
        
        sorted = "True";
    }
    
    else {
        
        sorted = "False";
    }

    return sorted;
    
}

//Print Function that outputs all values stored in the array
void Print() {
    
    cout << GetArray(); << endl;
        
    return;
}

};


int main() {
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray, SIZE);
    
    a.Print();
    
    cout << "Min: " << a.Find_min(0,4) << endl;
    cout << "Max: " << a.Find_max(5,10) << endl;
    cout << "Sum = " << a.Find_sum() << endl;
    cout << "Search 10: " << a.Search(10) << endl;
    cout << "Sorted? " << a.Is_sorted() << endl;
    
    return 0;
}


/* 

Was unable to successfully run the program

*/