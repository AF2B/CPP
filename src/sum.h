int sum(int number1, int number2)
{
  return number1 + number2;
}

int factorial(int number)
{
  if (number == 0) return 1;
  return number * factorial(number - 1);
}