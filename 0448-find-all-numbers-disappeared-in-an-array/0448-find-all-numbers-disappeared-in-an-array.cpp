class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s1;
        int n  = nums.size();

        vector<int>res;
        for(int i  = 1;i<=n;i++){
            s1.insert(i);
        }
        for(int j = 0;j<n;j++){
            if(s1.find(nums[j])!=s1.end()){
                s1.erase(nums[j]);
            }
        }

        for(int i :s1){
            res.push_back(i);
        }

        return res;
}};