/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false
*/



#include <algorithm> 
#include <iostream>

using namespace std;

bool is_isogram(std::string str) {
  int count_int = 0;
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  for (int i = 0; i < alphabet.size(); i++) {
    count_int = count(str.begin(), str.end(), alphabet[i]);
    count_int = count_int + count(str.begin(), str.end(), tolower(alphabet[i]));
    cout << "how many alphabet[i] " << alphabet[i] << endl;
    cout << "Count " << count_int << endl;
    if (count_int > 1) return false;
  }
  
  cout << "Count at the end! " << count_int << endl;
  
  return true;
}
