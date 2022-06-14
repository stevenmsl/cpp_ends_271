#include "solution.h"

#include <cstring>
using namespace sol271;
using namespace std;

/*takeaways
  - as long as you include the information of how
    long each individual string should be in
    the encoded string it should be sufficient
    to decode the strings back later


*/
string Solution::encode(vector<string> &strs)
{
  string result;
  /* len|string  */
  for (auto s : strs)
    result += to_string(s.size()) + "|" + s;
  return result;
}

vector<string> Solution::decode(string str)
{
  auto result = vector<string>();
  for (auto i = 0; i < str.size();)
  {
    /* retrieve the len info */
    string lenstr = "";
    while (str[i] != '|')
      lenstr.push_back(str[i++]);
    auto len = stoi(lenstr);
    /* i should point at a '|' now */
    i++; /* move to the beginning of the actual content of the string */
    string decoded = "";
    /*retrieve the string back */
    while (len > 0)
      decoded.push_back(str[i++]), len--;
    result.push_back(decoded);
  }

  return result;
}