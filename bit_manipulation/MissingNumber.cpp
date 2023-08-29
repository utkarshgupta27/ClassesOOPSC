// XOR principles in finding a missing element.
// nums = { 9, 6, 4, 2, 3, 5, 7, 0, 1 }, output=8
#include <iostream>
#include <unordered_set>
// using brute force approach::
int missingElementbyBF(int *arr, int n) {

  /* for (int i = 0; i <= n; ++i) {
     bool found = false;
     for (int num : nums) {
       if (i == num) {
         found = true;
         break;
       }
     }
     if (!found) {
       return i;
     }
   }
   */
  return -1; // This line should never be reached
}
// using loopkup/hashtable approach:
int missingElementbyHashmap(int arr[], int n) {
  std::unordered_set<int> m;
  // insert every element into hashmap
  for (int i = 0; i < n; ++i) {
    m.insert(arr[i]);
  }
  for (int i = 0; i <= n; ++i) {
    if (m.find(arr[i]) == m.end())
      std::cout << "missing" << i;
    return i;
  }
  std::cout << std::endl;
  return -1;
}

// using XOR (bit level operation) approach:
// a^0=a
// a^a=0
// a^b^a=a^a^b=b
int getMissingNumberusingXOR(int arr[], int n) {
  int res = 0;
  for (int i = 0; i < n; ++i) {
    res ^= arr[i];
  }
  for (int i = 0; i <= n; i++) {
    res ^= i;
  }
  return res;
  // time complexity: o(n+o(n)=>o(n))
  // space complexity: o(1)
}
int main() {
  int arr[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  std::cout << missingElementbyHashmap(arr, n);
  return 0;
}