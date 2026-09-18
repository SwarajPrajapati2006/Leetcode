class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j =   nums.size()-1;
        vector<int>res(n);

        int k = res.size()-1;
        while(k>=0){
            int val;
            if(abs(nums[i])<abs(nums[j])){
                val = nums[j];
                j--;

            }
            else{
                val   = nums[i];
                i++;
            }
            res[k] =  val*val;
            k--;
        }
        return res;
    }
};