class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;

        string resS = "";
        string resT = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '#') {
                if(!st.empty()) st.pop();
            }
            else {
                st.push(s[i]);
            }
        }

        while(!st.empty()) {
            resS += st.top();
            st.pop();
        }

        for(int i = 0; i < t.length(); i++) {
            if(t[i] == '#') {
                if(!st.empty()) st.pop();
            }
            else {
                st.push(t[i]);
            }
        }

        while(!st.empty()) {
            resT += st.top();
            st.pop();
        }

        return resS == resT;
    }
};