class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        double ans = INT_MAX;

        while (i < j) {
            double avg = (nums[i] + nums[j]) / 2.0;

            ans = min(ans, avg);

            i++;
            j--;
        }

        return ans;
    }
};