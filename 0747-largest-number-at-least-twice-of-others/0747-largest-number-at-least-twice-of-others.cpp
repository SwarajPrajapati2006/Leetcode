class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex= 0;
        int maxVal  = nums[0];

        for(int i = 0 ;i<nums.size();i++){
            if(nums[i]>maxVal){
                maxVal = nums[i];
                maxIndex =  i;
            }
        }

        for(int i = 0;i<nums.size();i++){
        
         if(i!=maxIndex && maxVal<nums[i]*2){
            return -1;
         }
        
        }

        return maxIndex;
    }
};