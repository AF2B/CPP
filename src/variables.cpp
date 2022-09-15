/**
 * In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

type variableName = value;
*/

#include <iostream>

int main(){
  int myNum = 5;               // Integer (whole number)
  double myFloatNum = 5.99;    // Floating point number
  char myLetter = 'D';         // Character
  std::string myText = "Hello"; // String
  bool myBoolean = true;       // Boolean

  int myAge = 24;

  int x, y, z;
  x = y = z = 50;
  std::cout << x + y + z << "\n\n";

  const int myNum = 15; // myNum will always be 15
  myNum = 10;           // error: assignment of read-only variable 'myNum'

  std::cout << myNum << myText << std::endl;
  std::cout << "My age is " << myAge << std::endl;
  std::cout << myNum + myAge << std::endl;
}
