/*
C++ User Input
You have already learned that cout is used to output (print) values. Now we will use cin to get user input.

cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

In the following example, the user can input a number, which is stored in the variable x. 
Then we print the value of x:
*/

#include <iostream>

int main(){
  int x;
  std::cout << "Type a number: ";       // Type a number and press enter
  std::cin >> x;                        // Get user input from the keyboard
  std::cout << "Your number is: " << x; // Display the input value

  std::string name;
  std::cout << "Type your name: ";
  std::cin >> name;
  std::cout << "Your name is: " << name << std::endl;

  std::getline(std::cin, name); // read a full line of text

  return 0;
}

/*
Good To Know
cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
*/