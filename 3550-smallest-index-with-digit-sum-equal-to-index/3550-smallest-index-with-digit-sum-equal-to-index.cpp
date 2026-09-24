class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        // int idx = -1;
        int minVal = 0;
        for(int i  = 0;i<nums.size();i++){
            int temp =  nums[i];
            int sum = 0;
            while(temp>0){
                int digit = temp%10;
                sum+= digit;
                temp/=10;
            }
            if(i==sum){
                minVal = min(minVal,sum);
                return i;
            }
        }
        return -1;
    
}};