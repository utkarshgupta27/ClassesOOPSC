#include <iostream>
using namespace std;
// brute force = power of 2 means, the set-bit count is 1

bool helper(int n) {
  if (n == 0)
    return false;
  while (n != 1) {
    if (n % 2 != 0)
      return false;
    n >>= 1;
  }
  return true;
  // time complexity=o(log n)
  // space complexity=o(1)
}

bool helperusingBrianKermighan(int n) {
  return n != 0 && (n & (n - 1)) == 0;
  // time complexity=o(1)
  // space complexity=o(1)                                }
  int main() {
    cout << helper(5) << endl;
    cout << helper(16) << endl;
  }
