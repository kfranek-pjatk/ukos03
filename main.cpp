#include<iostream>

int main()
{
  int a, b, c, d;
  float srednia;
  std::cout << "Podaj 4 liczby" << std::endl;
  std::cin >> a >> b >> c >> d;
  srednia = (a + b + c + d) / 4.0;
  std::cout << srednia << std::endl;
  return 0;
}
