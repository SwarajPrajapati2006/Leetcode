class Solution {
public:
    string reverseWords(string s) {
        int ans = 0;

        for (int i = 0; i < s.length()+1; i++) {

            if (i == s.length() || s[i] == ' ') {
                reverse(s.begin() + ans, s.begin() + i);
                ans = i + 1;
            }
        }

        return s;
    }
};