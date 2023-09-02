#include <iostream>
using namespace std;
void reArrange(int arr[], int size) {
  int Result[size];
  int k = 0;
  int largest = arr[0];
  // Rearrange the second half in reverse order into even indices of Result
  for (int i = size - 1; i >= size / 2; i--) {
    Result[k] = arr[i];
    k = k + 2;
    cout << arr[i] << " K: " << k << " ,";
  }

  // Reset k for odd indices and rearrange the first half
  k = 1;
  for (int i = 0; i < size / 2; ++i) {
    Result[k] = arr[i];
    k = k + 2;
    cout << arr[i] << " K: " << k << " ,";
  }
  for (int i = 0; i < size; i++) {
    arr[i] = Result[i];
  }
}

int main() {

  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "Array before arrangement: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  reArrange(arr, size);

  cout << "Array after arrangement: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}