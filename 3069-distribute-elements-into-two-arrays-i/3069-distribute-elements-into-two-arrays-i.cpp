class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
          vector<int> res1{nums[0]};
          vector<int> res2{nums[1]};
          for(int i  =2 ;i<nums.size();i++){
            if(res1.back()>res2.back()){
                res1.push_back(nums[i]);
            }
            else{
                res2.push_back(nums[i]);
            }
          }
           res1.insert(res1.end(), res2.begin(), res2.end());
        return res1;
    }
};