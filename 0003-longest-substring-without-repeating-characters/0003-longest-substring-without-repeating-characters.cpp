class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int r = 0;
        int count = 0;

        unordered_set<int>st;
        while(r<s.size()){
            while(st.find(s[r])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[r]);
            count = max(count,r-i+1);
            r++;
        }
        

 return count;

    }
};