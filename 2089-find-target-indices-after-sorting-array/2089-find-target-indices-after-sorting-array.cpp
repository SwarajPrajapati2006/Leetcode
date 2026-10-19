class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
          sort(nums.begin(),nums.end());
          vector<int>v1;
          for(int i = 0;i<nums.size();i++){
            if(nums[i]==target){
                v1.push_back(i);
            }
          }
          return v1;

    }
};