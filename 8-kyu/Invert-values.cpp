/*
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []
*/

#include <vector>

using namespace std;

std::vector<int> invert(std::vector<int> values)
{
  vector<int> finalValues;
  for (int i = 0; i < values.size(); i++) {
    if (values[i] > 0 || values[i] < 0) {
      finalValues.push_back (values[i]*(-1));
    }
    else if (values[i] == 0) finalValues.push_back (values[i]);
  }
  return finalValues;
}
