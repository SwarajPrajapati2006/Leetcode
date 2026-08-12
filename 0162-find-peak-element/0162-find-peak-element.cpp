class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int res = 0;
        int max =  nums[0];
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
                res =  i;
            }


        }

        return res;
    }
};