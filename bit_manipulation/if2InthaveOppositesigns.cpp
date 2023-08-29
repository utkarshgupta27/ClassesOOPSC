#include <iostream>
using namespace std;
// if leading bit on left side =0: sign is positive
// if leading bit on right side =1, sign is negative
string oppositeSign(int x, int y) {
  return (x ^ y) < 0 ? "Signs are opposite" : "Signs are not opposite";
}
int main() {
  int a = 100, b = 501;
  cout<<
}