/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/

#include <string>
bool solution(std::string const &str, std::string const &ending) {
  int len_end = ending.size();
  int len_str = str.size();
  for (int i = 1; i <= len_end; i++) {
    if (ending[len_end - i] != str[len_str - i]) return false;
  }
  return true;
}
