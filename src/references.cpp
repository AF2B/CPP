#include <iostream>
using namespace std;

int main(){
  string food = "Pizza";
  string foodCopy = food; // Copy the value of food to foodCopy
  string &foodReference = food; // Create a reference to food

  cout << food << endl; // Outputs Pizza

  food = "Hamburger"; // Change the value of food
  cout << food << endl; // Outputs Hamburger
  cout << foodCopy << endl; // Outputs Pizza

  food = "Sushi"; // Change the value of food
  cout << foodReference << endl; // Outputs Sushi

  cout << &food << endl; // Outputs the memory address of food
  cout << &foodReference << endl; // Outputs the memory address of food
}