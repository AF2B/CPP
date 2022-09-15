#include <iostream>

int main(){
  std::string name = "André";
  std::string surname = "Borba";
  std::string fullname = name + " " + surname;
  std::string fullname2 = name.append(surname);

  std::cout << fullname << std::endl;
  std::cout << fullname2 << std::endl;

  std::string x = "10";
  std::string y = "20";
  std::cout << x + y << std::endl; // 1020

  return 0; // 0 means success
}