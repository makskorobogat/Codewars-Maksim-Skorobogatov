/*
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.
*/

#include <string>

std::string countSheep(int number) {
  std::string counter = "";
  if (number == 0) return "";
  for (int i=1; i<=number; i++) {
    counter += std::to_string(i) + " sheep...";
  }
  return counter;
}
