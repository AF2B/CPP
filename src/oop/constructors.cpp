#include <iostream>

using std::string;

int main(){
  class Book{
    private:
      string title;
      string author;
      int pages;
      
    public:
      Book(){
        title = "no title";
        author = "no author";
        pages = 0;
      }
      Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
      }
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

    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkien", 700);

    std::cout << book1.getTitle() << std::endl;
    std::cout << book2.getTitle() << std::endl;

    return 0;
}