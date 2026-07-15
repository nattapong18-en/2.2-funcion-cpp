#include <iostream>

void doB() { std::cout << "In doB()\n"; }

void doA() {
  std::cout << "Starting In doA()\n";
  doB();
  std::cout << "End doA()\n";
}

int main() {
  std::cout << "Starting In main()\n";
  doB();
  doA();
  return 0;
}
