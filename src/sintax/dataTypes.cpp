#include <iostream>

int main(){
  int myNum = 5;             // Integer (whole number)
  float myFloatNum = 5.99;   // Floating point number
  double myDoubleNum = 9.98; // Floating point number
  char myLetter = 'D';       // Character
  bool myBoolean = true;     // Boolean
  std::string myText = "Hello"; // String

  float f1 = 35e3;
  double d1 = 12E4;
  std::cout << f1;
  std::cout << d1;

  char myGrade = 'B';
  std::cout << myGrade;

  char a = 65, b = 66, c = 67;
  std::cout << a;
  std::cout << b;
  std::cout << c;
}

/*
Data Type	Size	Description

boolean	1 byte	Stores true or false values
char	1 byte	Stores a single character/letter/number, or ASCII values
int	2 or 4 bytes	Stores whole numbers, without decimals
float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
*/