class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int k = 2; k <= n; k++) {
            string temp = "";
            int i = 0;

            while (i < s.size()) {
                int j = i;
            char c =  s[i];
                while (j < s.size() && c == s[j]) {
                    j++;
                }

              

              temp+= to_string(j-i);
              temp+= s[i];
            i= j;
            }

          s= temp;
        }

        return s;
    }
};