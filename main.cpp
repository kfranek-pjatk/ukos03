#include<iostream>

int main()
{
  int a, b, c;
  std::cout << "Podaj 3 liczby" << std::endl;
  std::cin >> a >> b >> c;
  std::cout << (a + b + c) / 3 << std::endl;
  return 0;
}
