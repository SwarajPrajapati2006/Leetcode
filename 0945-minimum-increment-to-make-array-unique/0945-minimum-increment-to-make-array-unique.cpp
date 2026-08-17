class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        int moves = 0;

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int num = it->first;
            int cnt = it->second;

            if (cnt > 1) {
                int extra = cnt - 1;

                freq[num + 1] += extra;
                moves += extra;
            }
        }

        return moves;
    }
};