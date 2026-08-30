class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>st;
        sort(nums.begin(),nums.end());

        int i = 0;
        int j  = 1;
        
        while(i<nums.size()&& j<nums.size()){
            if(i==j){
                j++;
                continue;
            }
            int diff  = abs(nums[i] - nums[j]);
            if(diff==k){
               if (st.find({nums[i], nums[j]}) == st.end() &&
                                  st.find({nums[j], nums[i]}) == st.end()) {
                                                                           st.insert({nums[i], nums[j]});
                                                                                                                                                                                                                                }
            i++;
            j++;
            }
            else if(diff<k){
                j++;
            }
            else{
                i++;
            }
        }
       return st.size();

    }
};