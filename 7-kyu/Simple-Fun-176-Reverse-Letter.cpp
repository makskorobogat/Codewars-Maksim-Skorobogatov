/*
Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string
*/


std::string reverse_letter(const std::string &str)
{
  std::string copy_str = str;
  std::string letters = ")(!@#$%?1234567890}{^&*_]=+-\\|[,./ ";
  for (int i=0; i<letters.size(); i++) {
    while (copy_str.find (letters[i]) != std::string::npos) copy_str.erase(copy_str.find(letters[i]), 1);
  }
  std::reverse(copy_str.begin(), copy_str.end());
  return copy_str; //coding and coding..
}
