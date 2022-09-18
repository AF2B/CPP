#include <iostream>

using std::string;

int main(){
  // Encapsulation
  // Encapsulation is the process of combining data and functions into a single unit
  // Encapsulation is used to hide the values or state of a structured data object inside a class, preventing unauthorized parties' direct access to them
  // Encapsulation can be achieved by: Declaring all the variables in the class as private and writing public methods in the class to set and get the values of variables

  // Creating a class
  class Book{
    private:
      string title;
      string author;
      int pages;
      
    public:
      void setTitle(string aTitle){
        title = aTitle;
      }
      string getTitle(){
        return title;
      }
      void setAuthor(string aAuthor){
        author = aAuthor;
      }
      string getAuthor(){
        return author;
      }
      void setPages(int aPages){
        pages = aPages;
      }
      int getPages(){
        return pages;
      }
    };

    // Creating an object
    Book book1;
    book1.setTitle("Harry Potter");
    book1.setAuthor("JK Rowling");
    book1.setPages(500);

    Book book2;
    book2.setTitle("Lord of the Rings");
    book2.setAuthor("Tolkien");
    book2.setPages(700);

    std::cout << book1.getTitle() << std::endl;
    std::cout << book2.getTitle() << std::endl;

    return 0;
}