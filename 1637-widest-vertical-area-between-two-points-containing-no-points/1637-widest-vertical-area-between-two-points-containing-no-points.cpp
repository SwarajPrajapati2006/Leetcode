class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
     int maxDiff = INT_MIN;
     sort(points.begin(),points.end());
     for(int i  = 0;i<points.size()-1;i++){
        int sub  =  points[i+1][0] -  points[i][0];
        maxDiff = max(maxDiff,sub);
     }   

     return maxDiff;
    }
};