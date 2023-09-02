#include <iostream>
using namespace std;

int findFirstUnique(int arr[], int size) {
  // Write your code here
  bool isRepeated = false;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j] && i != j) {
        isRepeated = true;
      }
    }
    if (!isRepeated) {
      return arr[i];
    }
    isRepeated = false;
  }
  return -1;
}

int main() {
  int arr[] = {2, 3, 9, 2, 3, 6};
  cout << findFirstUnique(arr, 6);
  return 0;
}