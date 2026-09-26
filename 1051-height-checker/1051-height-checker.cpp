class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int count = 0;
        vector<int>res = heights;
        sort(res.begin(),res.end());

        for(int i = 0;i<heights.size();i++){
            if(heights[i]!=res[i]){
                count++;
            }
        }
        return count;

    }
};