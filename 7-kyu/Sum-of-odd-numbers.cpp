/*
Given the triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...
Calculate the sum of the numbers in the nth row of this triangle (starting at index 1) e.g.: (Input --> Output)

1 -->  1
2 --> 3 + 5 = 8
*/

#include <numeric>

using namespace std;

long long rowSumOddNumbers(unsigned n){
  vector<int> sumValues;
  int firstValue = n * (n-1) + 1;
  int initialValue = firstValue;
  for (int i = 1; i != n; i++) {
    firstValue += 2; 
    sumValues.push_back (firstValue);
  }
  
  int sumFinal = accumulate (begin(sumValues), end(sumValues), 0, plus<int>());
  
  firstValue = initialValue + sumFinal;
  
  return firstValue;
  
}
