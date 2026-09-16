class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount = 0;
        for(int i  = 0;i<nums.size();i++){
        int count = 0;
            int val =  nums[i];
            int temp = val;
            while(temp>0){
                int digits = temp%10;
                count++;
                temp/=10;
            }
            if(count%2==0){
                evenCount++;
            }

        }
return evenCount;
    }
};