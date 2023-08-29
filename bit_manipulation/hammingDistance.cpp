#include <iostream>
using namespace std;
// find num of positions where bits are different for given input
// x=1 => 0 0 0 1
// y=8 => 1 0 0 0
// x^y => 1 0 0 1
//  approach 1: bit shifting & if xor ==1
void hammingDistance(int a, int b) {
  int xorVal = a ^ b;
  int distance = 0;
  while (xorVal ^ 0) {
    if (xorVal % 2 == 1) {
      distance += 1;
    }
    xorVal >>= 1;
  }
}
// timecomplexity: o(1) , worst case 32 bit integer o(32)
// spacecomplexity: o(1),memory is constant irrespective of input
// above apprach is like shifting each bit one by one
// apprach 2:brian kernighan's algorithm
// n  =40 => 00101000
// n-1=39 => 00100111
// n&(n-1)=32 00100000
//  in this approach we cleared rightmost bit of 1 in the original number
int hammingdistance(int a, int b) {
  int xorVal = a ^ b;
  int distance = 0;
  while (xorVal != 0) {
    distance += 1;
    xorVal &= (xorVal - 1)
  }
  return distance;
}
int main() {
  int a = 1;
  int b = 8;
  cout << "Hamming Distance between two integers is " << hammingDistance(a, b);
  return 0;
}
// timecomplexity: o(1) input size of int is fixed
// spacecomplexity: o(1),memory is constant irrespective of input