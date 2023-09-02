#include <algorithm> // for the sort function
#include <iostream>
using namespace std;

int *findSum(int arr[], int value, int size) {
  sort(arr, arr + size);
  int i = 0;
  int j = size - 1;
  int sum = 0;
  int *result = new int[2];
  while (i != j) {
    sum = arr[i] + arr[j];
    if (arr[j] + arr[i] < value) {
      i++;
    } else if (sum > value) {
      j--;
    } else {
      result[0] = arr[i];
      result[1] = arr[j];
      return result; // containing 2 number
    }
  }
  return arr;
  //time complexity: o(nlogn)
  
}

int main() {
  int arr[] = {1, 21, 3, 14, 5, 60, 7, 6};
  int value = 81;
  int size = sizeof(arr) / sizeof(arr[0]);

  if (size > 0) {
    int *arr2 = findSum(arr, value, size);
    int num1 = arr2[0];
    int num2 = arr2[1];

    if ((num1 + num2) != value)
      cout << "Not Found" << endl;
    else {
      cout << "Number 1 = " << num1 << endl;
      cout << "Number 2 = " << num2 << endl;
      cout << "Sum = " << num1 + num2 << endl;
    }
  } else {
    cout << "Input Array is Empty!" << endl;
  }
  return 0;
}
