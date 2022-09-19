#include <iostream>

int main()
{
  int n = 2;
  int *pn = &n;

  std::cout << "pn = " << pn << '\n';
  std::cout << "*pn = " << *pn << '\n';

  return 0;
}