#include <iostream>

int main()
{
  short firstNumber;
  short secondNumber;
  char operation;
  short result;
  char continueProgram;

  std::cout << "Enter the first number: ";
  std::cin >> firstNumber;

  std::cout << "Enter the second number: ";
  std::cin >> secondNumber;

  std::cout << "Enter the operation: ";
  std::cin >> operation;

  switch (operation)
  {
  case '+':
    result = firstNumber + secondNumber;
    break;
  case '-':
    result = firstNumber - secondNumber;
    break;
  case '*':
    result = firstNumber * secondNumber;
    break;
  case '/':
    result = firstNumber / secondNumber;
    break;
  default:
    std::cout << "Invalid operation" << std::endl;
    break;
  }

  std::cout << "The result is: " << result << std::endl;

  std::cout << "Do you want to continue? (y/n): ";
  std::cin >> continueProgram;

  if (continueProgram == 'y')
  {
    main();
  }
  else
  {
    return 0;
  }

  return 0;  
}