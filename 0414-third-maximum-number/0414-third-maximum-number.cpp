class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max = LONG_MIN;
        long smax = LONG_MIN;
        long tmax = LONG_MIN;


        for(int i  = 0;i<nums.size();i++){
           if(max!= LONG_MIN && max==nums[i]){
            continue;
           }
            if(smax!= LONG_MIN && smax==nums[i]){
            continue;
           }
            if(tmax!= LONG_MIN && tmax==nums[i]){
            continue;
           }

           if(max ==LONG_MIN  || max<nums[i]){
            tmax =  smax;
           smax = max;
            max = nums[i];
           }
           else if(smax ==LONG_MIN || smax<nums[i]){
            tmax =  smax;
            smax = nums[i];

           }
           else if(tmax ==LONG_MIN  || nums[i]>tmax){
            tmax =  nums[i];
           }
        }
        if(tmax !=LONG_MIN ){
            return tmax;
        }
        return max;

         
    }
};