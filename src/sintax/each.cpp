#include <iostream>
using namespace std;
int main()
{
  int array[] = {1, 4, 7, 4, 8, 4};
  cout << "The elements are: ";
  for (auto var : array)
  {
    cout << var << " ";
  }
  return 0;
}