/*
Write a function that checks if a given string (case insensitive) is a palindrome.
*/

#include <string>

using namespace std;

bool isPalindrom (const std::string& str)
{
  for (int i=0; i<str.size(); i++) {
    if (tolower (str[i]) != tolower (str[str.size()-i-1])) return false;
  }
  return true;
}
