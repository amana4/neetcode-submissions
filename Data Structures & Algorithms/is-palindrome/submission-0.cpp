#include <cctype>
class Solution {

public:
    bool isPalindrome(string s) {
    bool result = true;
    //left and right indexes     
    int l=0, r =s.length()-1;
     
    //traverse from left and right and compare 
    while(l<r) 
    {
      if(!isalnum(s[l])) 
      {
        l++;
         continue;
      }
      if(!isalnum(s[r])) 
      {
        r--;
        continue;
      }
      if(tolower(s[l++])!=tolower(s[r--]))
       {
         result = false;
         break;
       } 
    }
    return result;           
    }
};
