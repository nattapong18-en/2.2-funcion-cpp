#include <iostream>

using namespace std;

int getValult() {
  int input{};
  cout << "Enter your number: ";
  cin >> input;
  return input;
}

int main() {
  int number1 = getValult();
  int number2 = getValult();
  int sum = number1 + number2;

  // cout << "Sum of valult: " << sum << '\n';
  cout << number1 << " + " << number2 << " = " << sum << '\n';
  return 0;
}
