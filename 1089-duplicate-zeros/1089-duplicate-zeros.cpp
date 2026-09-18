class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>res(arr.size());
    int n =  arr.size();
        int i = 0 ;
        int d =  0;

        while(i<arr.size()){
            if(arr[i]==0){
                if(d<n){
                    res[d] = 0;
                }
                    d+=1;
                 if(d<n){
                    res[d] = 0;
                 }   
            
            }
            else{
                if(d<n){
                res[d] =  arr[i];
                    }    }
                    i++;
                    d++;

        }

        arr = res;

    }
};