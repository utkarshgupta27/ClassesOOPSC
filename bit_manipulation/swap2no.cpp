#include <iostream>

using namespace std;
int main() {
  int a = 10, b = 121;
  a = a ^ b;
  b = b ^ a;
  a = a ^ b;
  cout << a << b;
  return 0;
}