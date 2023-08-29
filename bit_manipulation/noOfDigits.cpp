#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int countDigits(int n) {
  int count = 0;
  while (n != 0) {
    count++;
    n /= 10;
  }
  return count;
}

int countDigitsUsinglog10(int n) { return int(log10(n) + 1); }

int countDigitsUsingRecursion(int n) {
  if (n == 0)
    return 0;
  return (1 + countDigitsUsingRecursion(n / 10));
}

int main() {
  int n = 125;
  // dIVISION [WHILE LOOP]

  cout << "Number of digits : " << countDigits(n) << endl;
  cout << "time complexity"
       << "O(n)"
       << "space complexity"
       << "o(1)" << endl;

  // approach 2 :logarithmic
  // digit count of N = upper bound of log10(N)
  cout << "Number of digits : " << countDigitsUsinglog10(n) << endl;
  cout << "time complexity"
       << "O(1)"
       << "space complexity"
       << "o(1)" << endl;

  // apporach 3:: recursive
  // ineffective if we dealing with large integer n
  cout << "Number of digits : " << countDigitsUsingRecursion(n) << endl;
  cout << "time complexity"
       << "O(n)"
       << "space complexity"
       << "o(n)" << endl;

  // apporach 4: convert to string
  string str = to_string(n);
  cout << "Number of digits : " << str.length() << endl;
  cout << "time complexity"
       << "O(n)"
       << "space complexity"
       << "o(n)" << endl;
  return 0;
}