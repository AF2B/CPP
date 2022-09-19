#include <iostream>

int main()
{
  int n = 2;
  int *pn = &n;

  std::cout << "pn = " << pn << '\n'; // 0x7fff5fbff7f8
  std::cout << "*pn = " << *pn << '\n'; // 2
  std::cout << "&n = " << &n << '\n'; // 0x7fff5fbff7f8

  return 0;
}