/*
Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F
*/

#include <string>

using namespace std;

std::string abbrevName(std::string name)
{
  string result = "";
  
  result.push_back (toupper(name[0]));
  result.push_back ('.');
  result.push_back (toupper(name[name.find (' ') + 1]));
  
  return result;
}
