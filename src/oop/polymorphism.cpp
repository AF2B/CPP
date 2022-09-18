#include <iostream>

using std::string;

int main() {
  // Polymorphism
  // Polymorphism is the ability to take many forms
  // Polymorphism is used to perform a single action in different ways
  // Polymorphism is used to perform different actions for the same method

  // Polymorphism with classes
  // Polymorphism can be achieved with classes by using virtual functions
  // Virtual functions are functions that can be redefined in derived classes
  // Virtual functions are declared with the virtual keyword
  // Virtual functions are defined in the base class
  // Virtual functions are redefined in the derived class

  // Creating a base class
  class Enemy {
    public:
      virtual void attack() {
    }
  };

  // Creating a derived class
  class Ninja: public Enemy {
    public:
      void attack() {
        std::cout << "Ninja attack!" << std::endl;
      }
  };

  // Creating a derived class
  class Monster: public Enemy {
    public:
      void attack() {
        std::cout << "Monster attack!" << std::endl;
      }
  };

  // Creating an object
  Ninja n;
  Monster m;

  // Creating an enemy object
  Enemy *enemy1 = &n;
  Enemy *enemy2 = &m;

  // Calling the attack method
  enemy1->attack();
  enemy2->attack();

  return 0;
}