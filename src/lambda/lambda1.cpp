#include <iostream>
#include <vector>

int main()
{
  std::vector<int> vector1= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  auto odd = [](int x) { return x % 2 != 0; };
  auto even = [](int x) { return x % 2 == 0; };

  for (auto i : vector1)
  {
    if (odd(i))
    {
      std::cout << i << " is odd" << std::endl;
    }
    else if (even(i))
    {
      std::cout << i << " is even" << std::endl;
    }
  }
  return 0;
}