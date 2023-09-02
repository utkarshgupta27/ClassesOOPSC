#include <iostream>
using namespace std;

int findMinimum(int arr[], int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int arr[] = {9, 2, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << findMinimum(arr, size);

  return 0;
}