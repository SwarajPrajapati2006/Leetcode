class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        unordered_map<char,int>mp;
        unordered_map<char,int>check;
        string res="";

        stack<char>st;
        for(int i  = 0;i<s.size();i++){
            mp[s[i]]++;
        }

        for(int i = 0;i<s.size();i++){
            char ch =  s[i];

            mp[ch]--;

            if(check[ch]==1){
                continue;
            }
            while(!st.empty()&& st.top()>ch && mp[st.top()]>0 ){
                check[st.top()] = 0;
                st.pop();
            }
            st.push(ch);
            check[ch] =  1;
        }

        while(!st.empty()){
            res+= st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};