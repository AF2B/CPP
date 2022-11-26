// everything about copy and reference in C++

#include <iostream>

int main()
{
  int a = 10;
  
  // copy
  int b = a;
  std::cout << "a = " << a << " b = " << b << std::endl;

  // reference
  int &c = a;
  std::cout << "a = " << a << " c = " << c << std::endl;

  // change a
  a = 20;
  std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;

  // change c
  c = 30;
  std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;

  return 0;
}