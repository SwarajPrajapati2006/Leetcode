class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>s1;

        sort(nums.begin(),nums.end());
        int i = 0;

        int  j =  nums.size()-1;

        while(i<j){
           double avg  =  (nums[i]+nums[j])/2.0; 
           s1.insert(avg);

           i++;
           j--;         
        }
        return s1.size();
    }
};