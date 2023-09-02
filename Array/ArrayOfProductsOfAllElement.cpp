#include <iostream>
using namespace std;

int *findProduct(int arr[], int size) {
  int *result = new int[size];
  int left = 1;
  for (int i = 0; i < size; ++i) {
    result[i] = left;
    left *= arr[i];
  }
  int right = 1;
  for (int i = size - 1; i >= 0; i--) {
    result[i] *= right;
    right *= arr[i];
  }
  return result;
}

int main() {
  int arr[] = {1, 2, 3, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int *arr2 = findProduct(arr, size);
  cout << "[";

  for (int i = 0; i < size; i++) {
    cout << arr2[i] << ", ";
  }
  cout << "]";
  return 0;
}