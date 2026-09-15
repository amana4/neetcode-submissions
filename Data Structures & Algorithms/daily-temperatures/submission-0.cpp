class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n,0); 
        //monotoic decreasing stack, represnts the index of 
        //days waiting for the next biggest temp.
        stack<int> st;
        for(int i=0;i<n;i++)
        {
             
            //If non empty and current temp greater than top
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
              //current index - index of last temp.  
              int prev= st.top();
              result[prev]= (i-st.top());
              st.pop();
            }
            st.push(i);

        }
         return result;

        }
};
