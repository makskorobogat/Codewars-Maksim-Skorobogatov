/*

Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.

*/


# include <string>

using namespace std;

std::string disemvowel(const std::string& str) {
  string result_str = str;
  for (int i = 0; i < str.size(); i++) {
    
    size_t p1 = result_str.find('a');
    if (p1 != string::npos) result_str.erase(result_str.find('a'), 1);

    size_t p10 = result_str.find('A');
    if (p10 != string::npos) result_str.erase(result_str.find('A'), 1);
    
    size_t p2 = result_str.find('e');
    if (p2 != string::npos) result_str.erase(result_str.find('e'), 1);
    
    size_t p20 = result_str.find('E');
    if (p20 != string::npos) result_str.erase(result_str.find('E'), 1);

    size_t p3 = result_str.find('i');
    if (p3 != string::npos) result_str.erase(result_str.find('i'), 1);

    size_t p30 = result_str.find('I');
    if (p30 != string::npos) result_str.erase(result_str.find('I'), 1);
    
    size_t p4 = result_str.find('o');
    if (p4 != string::npos) result_str.erase(result_str.find('o'), 1);
    
    size_t p40 = result_str.find('O');
    if (p40 != string::npos) result_str.erase(result_str.find('O'), 1);

    size_t p5 = result_str.find('u');
    if (p5 != string::npos) result_str.erase(result_str.find('u'), 1);
    
    size_t p50 = result_str.find('U');
    if (p50 != string::npos) result_str.erase(result_str.find('U'), 1);

  }
  return result_str;
}
