class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        // int left = 0;
        // int right = 0;

        // int maxAscsum = 0;
        // int sum = 0;

        // while(right < nums.size()) {
        //     if(right == 0 || nums[right] > nums[right-1]) {
        //         sum += nums[right];
        //     }
        //     else {
        //         sum = nums[right];
        //         left = right;
        //     }

        //     maxAscsum = max(maxAscsum, sum);
        //     right++;
        // }

        // return maxAscsum;
           int left = 0;
        int right = 0;

        int maxAscsum = 0;
        int sum = 0;

        while(right < nums.size()) {
            sum += nums[right];

            while(left < right && nums[right] <= nums[right-1]) {
                sum -= nums[left];
                left++;
            }

            maxAscsum = max(maxAscsum, sum);
            right++;
        }

        return maxAscsum;
    }
};