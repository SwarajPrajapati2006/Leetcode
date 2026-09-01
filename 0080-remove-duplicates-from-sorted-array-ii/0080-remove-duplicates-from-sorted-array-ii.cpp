class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()<=1){
            return nums.size();
        }
        int i = 2;
        int j =2;
        while(j<=(nums.size()-1)){
            if(nums[j]!=nums[i-2]){
                nums[i]= nums[j];
                i++;
            }
            j++;
        }
        return i;

    }
};