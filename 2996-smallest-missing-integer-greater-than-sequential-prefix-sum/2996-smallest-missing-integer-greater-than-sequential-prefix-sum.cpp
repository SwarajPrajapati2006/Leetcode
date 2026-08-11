class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+= nums[i];
            }
            else {
                break;
            }

        }

        while(true){
            bool check  = false;
            for(int i  = 0;i<nums.size();i++){
                if(nums[i]==sum){
                    check = true;
                    break;
                }
            }
            if(!check){
                return sum;
               }
               sum++;

        }
        return sum;

    }
};