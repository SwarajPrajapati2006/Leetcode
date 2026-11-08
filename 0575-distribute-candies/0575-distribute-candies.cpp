class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        int n = candyType.size();
        for(int i =  0;i<n;i++){
            mp[candyType[i]]++;
        }

        if(mp.size()>n/2){
            return n/2;
        }
        else{
            return mp.size();
        }
    }
};