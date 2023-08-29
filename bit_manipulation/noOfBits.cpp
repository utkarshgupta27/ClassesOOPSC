// using modulo & division method, we calculate binary representation of decimal
// number
//  n=7 , n/2(quotient)=3 , n%2=(remainder)=1
// n=3, n/2 =1, n%2=1
// n=1, n/2=0, n%2=1
#include <iostream>
#include <stack>
using namespace std;

int bitShiftingApproach(int n) {
  int count = 0;
  // num>>2 == num/2
  while (n > 0) {
    ++count;
    n >>= 1;
  }
  return count;
}

void ConvertDecimaltoBinUsingStacks(int n) {
  stack<int> stack;
  while (n > 0) {
    int remainder = n % 2;
    stack.push(remainder);
    n >>= 2;
  }
  cout << "while loop breaks only when n terminates to :  0 \n";
  while (!stack.empty()) {
    int item = stack.top();
    stack.pop();
    cout << item;
  }
}

int 
int main() {
  int n = 125;
  cout << "Number of bits : " << bitShiftingApproach(n) << endl;
  cout << "bits in n" << endl;
  ConvertDecimaltoBinUsingStacks(n);
  // run time complexity: o(log N)
  // space complexity:o(n)
  
  return 0;
}