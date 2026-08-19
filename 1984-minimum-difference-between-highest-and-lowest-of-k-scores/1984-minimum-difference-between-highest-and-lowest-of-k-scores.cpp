class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res =  INT_MAX;
        for(int i =  0;i+k-1<nums.size();i++)
        {
            int diff = nums[i+k-1]-nums[i];
            res = min(diff,res);
        }
        return res;
    }
};