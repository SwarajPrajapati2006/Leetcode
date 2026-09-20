class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s1;

        for(int i = 0; i < arr.size(); i++) {
            if(s1.find(arr[i] * 2) != s1.end() || (arr[i] % 2 == 0 && s1.find(arr[i] / 2) != s1.end())) {
                return true;
            }

            s1.insert(arr[i]);
        }

        return false;
    }
};