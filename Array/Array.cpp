// Dynamic array initialization
#include <iostream>
using namespace std;
int main() {
  const int size = 10;
  // dynamic array initialization
  int *dynamicArray = new int[size];
  for (int i = 0; i < size; ++i) {
    dynamicArray[i] = i;
  }
  // static array initialization
  int array2[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < size; ++i) {
    cout << array2[i];
  }
  // deleting allocated memory
  delete[] dynamicArray;
}
// adding new element need to resize dynamiArray:
class ArrayList {
  int *arr;         // array growing dynamically
  int num_elements; // number of elements in an array
  int capacity;     // current capacity of an array
public:
  void insert(int val) {
    // if arr size < capacity of list
    if (num_elements < capacity) {
      arr[num_elements] = val;
      num_elements++;
    } else {
      resize();
      arr[num_elements] = val;
      num_elements++;
    }
  }
  void resize() {
    // capacity(size) is doubled
    int *tempArr = new int[capacity * 2];
    capacity *= 2;
    for (int i = 0; i < num_elements; ++i) {
      tempArr[i] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
  }
  int length() { return num_elements; }
  int getAt(int index) { return arr[index]; }
  void print() {
    for (int i = 0; i < num_elements; ++i)
      cout << arr[i] << endl;
  }
};
