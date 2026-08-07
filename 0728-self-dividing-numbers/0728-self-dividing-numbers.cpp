class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i  = left;i<=right;i++){
            bool check = true;
            int num = i;
            int temp = num;
            while(temp>0){
                int digit = temp%10;
                if(digit==0 || num%digit!=0){
                    check = false;
                    break;
                }
                temp/=10;

            }
            if(check){
                res.push_back(num);
            }
        
        }
        return res;
    }
};