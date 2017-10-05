/*This program was created by Coral Dixon on Oct 4 2017.
The program uses a class named "Book" that stores functions that
generate the title, author, and copyright year. There are 5 objects
that take user input of the title, author, and copyright year for
5 books. The programs prints the book list at the end.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Book { //Class declaration
    
    public: 
    //Public functions; sets and gets
    void SetTitle(string title_given);
    string GetTitle() const;
    
    void SetAuthor(string author_given);
    string GetAuthor() const;
    
    void SetCopyrightYear(int copyright_given);
    int GetCopyrightYear() const;
    
    void Print() { //Print function. Is defined inside the class. Prints the input for title, author, and copyright year. 
    cout << "Title: " << GetTitle() << endl;
    cout << "Author: " << GetAuthor() << endl;
    cout << "Copyright Year: " << GetCopyrightYear() << endl;
    } 

    private: //All the classes variables are private
    string title_;
    string author_;
    int copyright_year_;
  
};

void Book::SetTitle(string title_given){ //Sets the title based on user input
    
    title_ = title_given;
    return;
}

string Book::GetTitle() const { //Returns the title
    
    return title_;
}

void Book::SetAuthor(string author_given){ //Sets the author name based on user input
    
    author_ = author_given;
    return;
}

string Book::GetAuthor() const { //Returns the authors name
    
    return author_;
}

void Book::SetCopyrightYear(int copyright_given){ //Sets the copyright year based on user input
    
    copyright_year_ = copyright_given;
    return;
}

int Book::GetCopyrightYear() const { //Returns the copyright year
    
    return copyright_year_;
}

int main() {
    //Calls the private variables of the class to the main
    string title_ = "";
    string author_ = "";
    int copyright_year_ = 0;
    
    //5 objects based off of the Book class
    Book book1;
    Book book2;
    Book book3;
    Book book4;
    Book book5;

    //Book 1
    cout << "Please enter a book title: " << endl;
    cin >> title_;
    book1.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    cin >> author_;
    book1.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyright_year_;
    book1.SetCopyrightYear(copyright_year_);
    
    //Book 2
    cout << "Please enter a book title: " << endl;
    cin >> title_;
    book2.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    cin >> author_;
    book2.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyright_year_;
    book2.SetCopyrightYear(copyright_year_);
    
    //Book 3
    cout << "Please enter a book title: " << endl;
    cin >> title_;
    book3.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    cin >> author_;
    book3.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyright_year_;
    book3.SetCopyrightYear(copyright_year_);
    
    //Book 4
    cout << "Please enter a book title: " << endl;
    cin >> title_;
    book4.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    cin >> author_;
    book4.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyright_year_;
    book4.SetCopyrightYear(copyright_year_);
    
    //Book 5
    cout << "Please enter a book title: " << endl;
    cin >> title_;
    book5.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    cin >> author_;
    book5.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyright_year_;
    book5.SetCopyrightYear(copyright_year_);
    cout << endl;
    
//Prints the book collection entered numbered 1-5.
   cout << "#1: ";
   book1.Print();
   cout << endl;
   cout << "______________________________" << endl;
   cout << "#2: ";
   book2.Print();
   cout << endl;
   cout << "______________________________" << endl;
   cout << "#3: ";
   book3.Print();
   cout << endl;
   cout << "______________________________" << endl;
   cout << "#4: ";
   book4.Print();
   cout << endl;
   cout << "______________________________" << endl;
   cout << "#5: ";
   book5.Print();
   
    return 0;
}

/*
#1: Title: A
Author: B
Copyright Year: 1

______________________________
#2: Title: C
Author: D
Copyright Year: 2

______________________________
#3: Title: E
Author: F
Copyright Year: 3

______________________________
#4: Title: G
Author: H
Copyright Year: 4

______________________________
#5: Title: I
Author: J
Copyright Year: 5


Process exited with code: 0 */