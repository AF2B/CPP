#include <iostream>
using namespace std;

int main(){
  int myNumbers[5] = {1, 2, 3, 4, 5};
  std::cout << myNumbers[0] << std::endl;
  std::cout << myNumbers[1] << std::endl;
  std::cout << myNumbers[2] << std::endl;
  std::cout << myNumbers[3] << std::endl;
  std::cout << myNumbers[4] << std::endl;

  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; // Always 4 elements
  string cars2[] = {"Volvo", "BMW", "Ford", "Mazda", "Honda", "Volkswagen"}; // 6 or more elements
  cout << cars[0] << endl;
  cars[1] = "Volkswagen";
  cout << cars[1] << endl;

  /*
  Get the Size of an Array
  To get the size of an array, you can use the sizeof() operator.
  */

  int myNumbers2[5] = {1, 2, 3, 4, 5};
  cout << sizeof(myNumbers2) << endl; // 20 because sizeof method returns the size in bytes.
  cout << sizeof(myNumbers2) / sizeof(int) << endl; // 5

  return 0;
}