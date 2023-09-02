#include <climits>
#include <iostream>
using namespace std;

int findSecondMaximum(int arr[], int size) {
  int secondmax = INT_MIN;
  // Write your code here
  int firstmax = INT_MIN;
  // Find the first maximum
  for (int i = 0; i < size; i++) {
    if (arr[i] > firstmax) {
      secondmax = firstmax;
      firstmax = arr[i];
    } else if (secondmax < arr[i] && arr[i] != firstmax) {
      secondmax = arr[i];
    }
  }
  return secondmax;
}

int main() {
  int arr[] = {2, 3, 9, 2, 3, 6};
  cout << findSecondMaximum(arr, 6);
  return 0;
}