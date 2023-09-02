#include <iostream>

using namespace std;
int *removeEven(int *&Arr, int &size) {
  int countEven = 0;
  for (int i = 0; i < size; ++i) {
    if (Arr[i] % 2 == 0) {
      countEven++;
    }
  }
  int newSize = size - countEven;
  int *newArr = new int[newSize];
  int k = 0;
  for (int j = 0; j < size; ++j) {
    if (Arr[j] % 2 != 0) {
      newArr[k++] = Arr[j];
    }
  }
  delete[] Arr;
  size = newSize;

  return newArr;
}
int main() {
  int size = 7;
  int *Arr = new int[7]{1, 2, 4, 5, 10, 6, 3};
  Arr = removeEven(Arr, size);
  for (int j = 0; j < size; ++j) {
    cout << Arr[j] << " ";
  }
  return 0;
}