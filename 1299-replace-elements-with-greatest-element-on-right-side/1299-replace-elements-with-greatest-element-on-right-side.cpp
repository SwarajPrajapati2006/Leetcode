class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    //    vector<int>res;

    //    for(int i = 0;i<arr.size();i++){
    //     int maxVal = -1;
    //     for(int j = i+1;j<arr.size();j++){
    //         maxVal  = max(arr[j],maxVal);
    //     }
    //     res.push_back(maxVal);
    //    }

    //    return res;

    int maxi = -1;

    for(int i = arr.size()-1;i>=0;i--){
        int temp = arr[i];
        arr[i] =  maxi;
        maxi = max(temp,maxi);
    
    }
    return arr;
    }

};