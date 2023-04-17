/*
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/

#include <string>
#include <algorithm>
using namespace std;

int getCount(const string& inputStr){
  string vowels = "aeiou";
  int num_vowels = 0;
  for (int i=0; i < vowels.size(); i++) {
    int count_vowels = count (inputStr.begin(), inputStr.end(), vowels[i]);
    num_vowels += count_vowels;
  }
  return num_vowels;
}
