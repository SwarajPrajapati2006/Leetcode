class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = 0;
        for(int i  = 0;i<nums.size();i++){
           
            for(int j = i+1;j<nums.size();j++){
              int   ans =  (nums[i]-1)*(nums[j]-1);
                res = max(res,ans);
            }
        }
        return res;
    }
};