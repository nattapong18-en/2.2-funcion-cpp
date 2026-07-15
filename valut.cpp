#include <iostream>

using namespace std;

int getValueFromUser() {
  cout << "Enter interger: ";
  int input{};
  cin >> input;
  return input;
}

int main() {
  int number1 = getValueFromUser();
  int number2 = getValueFromUser();
  int sum = number1 + number2;
  cout << "Sum of value: " << sum << '\n';

  return 0;
}
