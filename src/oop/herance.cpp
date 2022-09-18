#include <iostream>

using std::string;

int main(){
  // Inheritance
  // Inheritance is the process of deriving a new class from an existing class
  // Inheritance is used to reuse code
  // Inheritance is used to create a new class from an existing class
  // Inheritance is used to add more features to an existing class
  // Inheritance is used to create a specialized class
  // Inheritance is used to create a sub class
  // Inheritance is used to create a super class
  // Inheritance is used to create a parent class
  // Inheritance is used to create a child class

  // Creating a base class
  class Chef {
    public:
      void makeChicken() {
        std::cout << "The chef makes chicken" << std::endl;
      }
      void makeSalad() {
        std::cout << "The chef makes salad" << std::endl;
      }
      void makeSpecialDish() {
        std::cout << "The chef makes bbq ribs" << std::endl;
      }
  };

  // Creating a derived class
  class ItalianChef: public Chef {
    public:
      void makePasta() {
        std::cout << "The chef makes pasta" << std::endl;
      }
      void makeSpecialDish() {
        std::cout << "The chef makes chicken parm" << std::endl;
      }
  };

  // Creating an object
  Chef chef;
  chef.makeSpecialDish();

  ItalianChef italianChef;
  italianChef.makeSpecialDish();

  return 0;
}