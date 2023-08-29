#include <iostream>
// a^0=a
// a^a=0
// a^b^a = a^a^b=0^b=b
// 1^5^1 => 1^1^5=> 0^5=>5

using namespace std;
int getOddOccurence(int array[], int length) {
  int res = 0;
  for (int i = 0; i < length; i++) {
    res ^= array[i];
  }
  return res;
  // time complexity=o(length)
  // space complexity=o(1)
}

int main() {
  int arr[] = {4, 3, 3, 4, 4, 4, 5, 3, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "odd occurring element is " << getOddOccurence(arr, n);
  return 0;
}