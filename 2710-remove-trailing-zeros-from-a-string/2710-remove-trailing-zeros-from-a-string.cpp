class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num.size()>0){
            if(num.back()=='0'){
                num.pop_back();
            }
            else{
                break;
            }
        }
        return num;
    }
};