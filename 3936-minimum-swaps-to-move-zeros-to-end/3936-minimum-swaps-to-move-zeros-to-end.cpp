class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;

        while (i < j) {

            while (i < nums.size() && nums[i] != 0)
                i++;

            while (j >= 0 && nums[j] == 0)
                j--;

            if (i >= j)
                break;

            ans++;
            i++;
            j--;
        }

        return ans;
    }
};


