class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>freq;
        vector<string>diff;
        for(int i = 0;i<words.size();i++){
            freq[words[i]]++;
        }

        for(auto i : freq){
            diff.push_back(i.first);
        }

        sort(diff.begin(),diff.end(),[&](string a , string b){

        if(freq[a]==freq[b]){
            return a<b;
        }
        return freq[a]>freq[b];});
     vector<string>res;

     for(int i  = 0;i<k;i++){
        res.push_back(diff[i]);
     }
     return res;
    }
};