class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());

    //    int maxi = *max_element(nums.begin(), nums.end());
    //    int mini = *min_element(nums.begin(), nums.end());
        vector<int>res;
       for(int i = 1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]+1){
            for(int j  = nums[i-1]+1;j<nums[i];j++){
                res.push_back(j);
            }
        }
       
       }
       return res;
    }
};