// finds the element that is not repeated.
// nums = { 4, 1, 2, 9, 1, 4, 2 }
// brute force approach:
// time complexity:O(n2)
// space complexity:o(1)
#include <iostream>
#include <map>

void SingleElement(int *arr, int n) {
  // hashtable approach:
  // time:O(n)
  // space:o(n)
  std::map<int, int> m;
  std::map<int, int>::iterator it;
  for (int i = 0; i < n; i++)
    m[arr[i]]++;
  for (it = m.begin(); it != m.end(); it++) {
    if (it->second == 1) {
      std::cout << it->first << std::endl;
      return;
    }
  }
}

int SingleElementUsingXOR(int *arr, int n) {
  // XOR approach:
  // time:o(n)
  // space:o(1)
  int Xor = 0;
  for (int i = 0; i < n; i++) {
    Xor = Xor ^ arr[i];
  }
  return Xor;
}
int main() {
  int arr[] = {4, 1, 2, 9, 1, 4, 2};
  std::cout << SingleElementUsingXOR(arr, sizeof(arr) / sizeof(arr[0]));
  return 0;
}
