class Solution {
public:
    bool isValid(string s) {
    std:stack<char> st;
    int i =0;
    bool result = true;
    unordered_map<char, char> match_set =
     {
      {'(', ')'},
      {'[', ']'},
      {'{', '}'}
    };    

    while(s[i])
    {
       if(s[i]=='(' || s[i]=='{' || s[i]=='[')
       {
        st.push(s[i]);
       }
       else if(!st.empty() && s[i]== match_set[st.top()])
       {            
           st.pop();
       }
       else
       {
        result = false;
        break;
       }
       i++;
    }

    return result && st.empty();
        
    }
};
