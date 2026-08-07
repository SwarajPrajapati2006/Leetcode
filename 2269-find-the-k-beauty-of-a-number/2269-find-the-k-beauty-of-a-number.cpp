class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count = 0;
        string s =  to_string(num);
        

        for(int i = 0;i<=s.length()-k;i++){
           int val =  stoi(s.substr(i, k));
           if(val!=0 && num%val==0){
            count++;
           }
        }
        return count;
    }
};