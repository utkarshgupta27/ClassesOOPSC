// a << b => a * 2**b
#include <iostream>
using namespace std;

int leftShift(int number, int i) { return number << i; }
// problem 1: find bit length of a number
// input =8, output = 4 (1000)
// input =7, output =3(111)
/*int bitsLength(int n) {
  int bitsCounter = 0;
  // left shift bitsCounter until its value is less or equal to given number
  while ((1 << bitsCounter) <= n) {
    bitsCounter += 1;
  }
  return bitsCounter;
}*/
int bitsLength(int n) {
  int bitsCounter = 0;
  int shifted = 1;
  while (shifted <= n) {
    shifted <<= 1;
    bitsCounter += 1;
  }
  return bitsCounter;
}
// To determine if the kth bit of a number is set using the left shift operator
bool isKthBitSet(int num, int k) { return num & (1 << (k - 1)); }
int getFirstSetbit(int n) {
  if (n == 0)
    return 0;
  int k = 1;
  while (true) {
    if ((n & 1 << (k - 1)) == 0)
      k++;
    else
      return k;
  }
}
int main() {
  int number = 100;
  cout << "shift 3 position" << leftShift(number, 3);
  cout << bitsLength(7) << endl;
  string s = isKthBitSet(number, 4) ? "bitset" : "bit unset";
  cout << s << endl;
  cout << getFirstSetbit(18);
  return 0;
}
