#include <iostream>

using namespace std;

int countSet(int n) {
  int count = 0;
  while (n > 0) {
    count += (n & 1);
    n >>= 1;
  }
  return count;
}

int countSetOptimizedApproach(int n) {
  int count = 0;
  while (n > 0) {
    n &(n - 1);
    count++;
  }
  return count;
  // time complexity: o(total bits in n), space complexity; o(1)
}


int main() {
  int n = 125;
  cout << "SetBit Count is: " << countSet(n) << endl;
  // time complexity: o(total bits in n), space complexity; o(1)
  return 0;
}