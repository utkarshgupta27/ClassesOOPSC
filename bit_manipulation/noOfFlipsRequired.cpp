#include <iostream>
using namespace std;

int helper(int a, int b, int c) {
  // a|b ==> c
  int ans = 0;
  for (int i = 0; i < 32; i++) {
    int bitC = ((c >> i) & 1);
    int bitB = ((b >> i) & 1);
    int bitA = ((a >> i) & 1);
    if ((bitA | bitB) != bitC) {
      if (bitC == 0) 
      {
        if (bitA == 1 && bitB == 1) {
          ans += 2;
        } else {
          ans += 1;
        }
      } 
      else {
        ans += 1;
      }
    }
  }
  return ans;
}

int main() {
  int a = 2, b = 6, c = 5;
  cout << "Min Flips required to make two numbers equal to third is : "
       << helper(a, b, c);
  return 0;
}