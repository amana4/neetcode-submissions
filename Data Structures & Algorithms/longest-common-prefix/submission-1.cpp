class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs.size()==0) return result;
        if(strs.size()==1) return strs[0];
        string ref = strs[0];
        //Go thru each char in ref string, i = index number of char
        for(int i=0;i<ref.size();i++)
        {
           //Go thru the char of each string
           for(int j=1;j<strs.size();j++)
           {
             string comp = strs[j]; 
             if(i>=comp.size() || ref[i]!=comp[i])
             {
                return result;
             }
           }
        result+=ref[i];

        }

 
    }
};