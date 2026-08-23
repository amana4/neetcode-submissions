
#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
    std::unordered_map<char,int> count_s, count_t;
    if(s.length()!= t.length())
       return false;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
      count_s[s[i]]++;
      count_t[t[i]]++;
    } 
    return count_s == count_t;
  }
};
