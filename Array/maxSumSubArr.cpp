#include <iostream>
using namespace std;

// find continguous subarray with largest sum
int maxSumArr(int arr[], int arrSize) {
  // brute force approach
  //  1 + 7 -2 -5 +10
  int maxSum = arr[0];
  for (int i = 0; i < arrSize; ++i) {

    int temp = arr[i];
    cout << temp << endl;
    for (int j = i + 1; j < arrSize; ++j) {
      temp = temp + arr[j];
      if (temp > maxSum) {
        maxSum = temp;
      }
      cout << temp << endl;
    }
  }
  return maxSum;
}
int maxSumArrOptimize(int arr[], int arrSize) {
  //  1 + 7 -2 -5 +10
  int maxSum = arr[0];
  for (int i = 0; i < arrSize; ++i) {

    int temp = arr[i];
    cout << temp << endl;
    for (int j = i + 1; j < arrSize; ++j) {
      temp = temp + arr[j];
      if (temp > maxSum) {
        maxSum = temp;
      }
      cout << temp << endl;
    }
  }
  return maxSum;
}
int main() {
  int arr[] = {1, 7, -2, -5, 10, -1};
  int Size = sizeof(arr) / sizeof(arr[0]);
  cout << maxSumArrOptimize
    (arr, Size);
  return 0;
}
