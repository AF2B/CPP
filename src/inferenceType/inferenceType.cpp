#include <iostream>

int main()
{
  auto numberOne = 1;
  auto numberTwo = 2;

  auto sum = numberOne + numberTwo;

  std::cout << sum << std::endl;

  // when the output is i, it means int
  std::cout << typeid(sum).name() << std::endl;
  std::cout << typeid(numberOne).name() << std::endl;
  std::cout << typeid(numberTwo).name() << std::endl;
  return 0;
}