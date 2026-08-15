class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>m1;
    for(int i  =0;i<nums.size();i++){
        m1[nums[i]]++;
        if(m1[nums[i]]<=k){
            res.push_back(nums[i]);
        }
    }
    return res;
    }
};