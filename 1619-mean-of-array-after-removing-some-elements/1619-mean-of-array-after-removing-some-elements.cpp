class Solution {
public:
    double trimMean(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int n  = arr.size();
        vector<int>res;

        int removeCount = n* 5/100;
       

      for(int i =  0 + removeCount;i< n - removeCount;i++){
            res.push_back(arr[i]);

      }
      double sum =  0;

      for(int i = 0;i<res.size();i++){
        sum+=  res[i];
      }
      double avg =  sum/res.size();

      return avg;
    }
};