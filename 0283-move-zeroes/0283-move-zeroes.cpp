class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>zero;
        vector<int>non;
        vector<int>res;

        // int k = 0;
        // for(int i = 0;i<nums.size();i++){
        //      if(nums[i]!=0){
        //         nums[k]  = nums[i];
        //         k++;

        //      }

        // } 
        //  while(k<nums.size()){
        //     nums[k] = 0;
        //     k++;
        //  }
            for(int i = 0 ;i<nums.size();i++){
                if(nums[i]!=0){
                    non.push_back(nums[i]);
                }
                else{
                    zero.push_back(nums[i]);
                }
            }

            for(int i = 0 ;i<non.size();i++){
                res.push_back(non[i]);
            }
            for(int i = 0 ;i<zero.size();i++){
                res.push_back(zero[i]);
            }
            nums = res;
    }
};