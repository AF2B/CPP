#include <iostream>
using namespace std;

int main(){
  string letters[2][4] = {
    {"A", "B", "C", "D"},
    {"E", "F", "G", "H"}
  };

  cout << letters[0][2] << endl; // C
  cout << letters[1][3] << endl; // H

  letters[0][0] = "Z";

  cout << letters[0][0]; // Now outputs "Z" instead of "A"

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << letters[i][j] << "\n";
    }
  }

  return 0;
}