class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // if(nums.size()==1 || (nums[0]==1 || nums[0]==0)){
        //     return 1;
        // }
        
         int  count_zero  =  0;
        int   count_one =  0;
    
    int max_zero = 0;
    int max_one = 0;
        
        for(int i = 0;i<nums.size();i++){
          if(nums[i]==0){
              count_zero++;
              count_one = 0;
              max_zero =  max(count_zero, max_zero);
          }
          else{
              count_one++;
              count_zero= 0;
              max_one =  max(count_one,max_one);
              
          }
        }
        return  max_one;
    }
};