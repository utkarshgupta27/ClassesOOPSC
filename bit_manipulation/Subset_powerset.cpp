// problem: finds all possible subsets/powerset of given input
// Input: [1, 2, 3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// logic: subset of any given input = powerset e.g., n=3, powerset =
// power(2,n)=8 using bitwise operations
/*Counter (in decimal)	Counter (in binary)	Subset
            0	            000	          []
            1	            001	            [1]
            2	            010	            [2]
            3	            011	            [1, 2]
            4	            100	            [3]
            5	            101	              [1, 3]
            6	            110	            [2, 3]
            7	            111	            [1, 2, 3]
*/
// approach: involves counter variable that goes from 0 to 2**n -1
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void subSets(vector<int> &nums) {
  int n = nums.size();
  int powSize = pow(2, n);
  for (int counter = 0; counter < powSize; ++counter) {
    for (int i = 0; i < n; ++i) {
      if ((counter & (1 << i)) != 0) {
        cout << "[" << nums[i] << "]";
      }
    }
    cout << endl;
  }
  // time complexity: n* 2**n
  // space complexity: o(2**n)
}

int main() {
  vector<int> array = {1, 2, 3};
  subSets(array);
}