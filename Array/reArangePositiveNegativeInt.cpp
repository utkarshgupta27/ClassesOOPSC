#include <iostream>
using namespace std;

void reArrangeusingNewArray(int arr[], int size) {
  int negArr[size];
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      negArr[k++] = arr[i];
    }
  }
  for (int i = 0; i < size; i++) {
    if (arr[i] >= 0) {
      negArr[k++] = arr[i];
    }
  }
  for (int i = 0; i < size; i++) {
    arr[i] = negArr[i];
  }
}
void reArrange(int arr[], int size) {
  int j = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      if (i != j)
        swap(arr[i], arr[j]);
      j++;
    }
  }
}

int main() {

  int arr[] = {10, -1, 20, 4, 5, -9, -6};
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