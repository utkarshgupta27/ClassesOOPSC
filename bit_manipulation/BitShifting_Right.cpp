// logical right shift means shifting the bits to the right, MSB bcomes 0
// arithmetic right shift means shifting th ebits to the right, MSB is same as
// original number

// logical right shift (>>>) formulat; a>>>b = a/2**b
// arithmetic right shift (>>)

// input a number and check if the kth bit is set or not using right shift
#include <iostream>
#include <string>
using namespace std;
bool isKthBitSet(int num, int k)

{
  return ((num >> (k - 1) & 1) != 0);
}

int getFirstSetbit(int n) {
  if (n == 0)
    return 0;
  int k = 1;
  while (true) {
    if ((n >> (k - 1) & 1) == 0)
      k++;
    else
      return k;
  }
}
int main() {
  int number = 8;

  string s = isKthBitSet(number, 3) ? "bitset" : "bit unset";
  cout << s << endl;
  cout << getFirstSetbit(18);
  return 0;
}
