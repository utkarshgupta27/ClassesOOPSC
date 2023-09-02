#include <iostream>

using namespace std;
int *mergeArrays(int arr1[], int arr2[], int arr1Size, int arr2Size) {
  int *mergeArr = new int[arr1Size + arr2Size];
  int i = 0, j = 0, k = 0;
  while (i < arr1Size && j < arr2Size) {
    if (arr1[i] < arr2[j]) {
      mergeArr[k++] = arr1[i++];
    } else {
      mergeArr[k++] = arr2[j++];
    }
  }
  while (i < arr1Size) {
    mergeArr[k++] = arr1[i++];
  }
  while (j < arr2Size) {
    mergeArr[k++] = arr2[j++];
  }

  return mergeArr;
  // time complexity : o(n+m)
}

int main() {
  int arr1[] = {1, 3, 4, 5};
  int arr2[] = {2, 6, 7, 8};
  int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
  int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
  int *result = mergeArrays(arr1, arr2, arr1Size, arr2Size);
  for (int i = 0; i < arr1Size + arr2Size; i++)
    cout << result[i] << " ";
  cout << endl;
  delete[] result;
  return 0;
}
