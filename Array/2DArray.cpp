// 2 Diminensional array
#include <iostream>
using namespace std;
int main() {
  const int r = 2, c = 2;
  // static array initialization
  int staticArr[r][c] = {{1, 2}, {3, 4}};
  // print static array
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      cout << staticArr[i][j];
  cout << endl;
  // dynamic array initialization
  int **dynamicArr = new int *[r];
  for (int i = 0; i < r; ++i)
    dynamicArr[i] = new int[c];
  // assign values
  int k = 0;
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      dynamicArr[i][j] = ++k;
  // print dynamic array
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      cout << dynamicArr[i][j] << " ";
  cout << endl;
  // freeing memory
  for (int j = 0; j < r; ++j)
    delete[] dynamicArr[j];
  delete[] dynamicArr;
}