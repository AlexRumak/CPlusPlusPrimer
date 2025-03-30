#include <iostream>

int main()
{
  std::cout << "Enter two numbers: ";
  int a = 0, b = 0;
  std::cin >> a >> b;
  int mult = a * b;
  std::cout << "The product of " << a << " and " << b << " is " << mult << std::endl;
}