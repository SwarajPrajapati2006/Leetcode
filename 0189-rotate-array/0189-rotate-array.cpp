class Solution {
public:
    void rotate(vector<int>& nums, int k) {

       
        int  n=    nums.size();
        k = k%n;
        int m = n-k;


        vector<int>v1;
        for(int i  = m;i<nums.size();i++){
            v1.push_back(nums[i]);
        }

        for(int i  = 0;i<m;i++){
            v1.push_back(nums[i]);
        }
        nums = v1;


    }
};