#include <iostream>
#include "sum.h"
#include "typedef.h"

int main()
{
  int result = sum(1, 2);

  std::cout << result << std::endl;

  std::cout << "" << std::endl;

  id id1 = 1982981;
  counter counter1 = 0;
  std::string name = "andreborba";

  std::cout << typeid(id1).name() << std::endl;
  std::cout << typeid(counter1).name() << std::endl;
  std::cout << typeid(name).name() << std::endl;
  return 0;
}
