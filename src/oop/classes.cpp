#include <iostream>

using std::string

int main(){
    // Classes
    // Classes are user defined data types
    // Classes are used to create objects
    // Objects have attributes and methods
    // Attributes are variables
    // Methods are functions

    // Creating a class
    class Book{
      public:
        string title;
        string author;
        int pages;
    };

    // Creating an object
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 700;

    std::cout << book1.title << std::endl;
    std::cout << book2.title << std::endl;

    return 0;
}