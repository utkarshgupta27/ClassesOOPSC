#include <iostream>
#include <string>
using namespace std;

string test(int n) { return (n & 1) == 0 ? "even" : "odd"; }

int main() {
  int firstNumber = 125;
  int secondNumber = 8;
  cout << "Number " << firstNumber << " is : " << test(firstNumber) << endl;
  cout << "Number " << secondNumber << " is : " << test(secondNumber);
  return 0;
}