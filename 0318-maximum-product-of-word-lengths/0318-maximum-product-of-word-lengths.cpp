class Solution {
public:

    bool check(string str1, string str2) {
        vector<bool> v1(26, false);

        for (char c : str1) {
            v1[c - 'a'] = true;
        }

        for (char c : str2) {
            if (v1[c - 'a']) {
                return false;
            }
        }

        return true;
    }

    int maxProduct(vector<string>& words) {
        int maxi = 0;

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {

                int prod = words[i].size() * words[j].size();

                if (prod <= maxi)
                    continue;

                if (check(words[i], words[j])) {
                    maxi = max(maxi, prod);
                }
            }
        }

        return maxi;
    }
};