class Solution {
public:
    bool isPalindrome(int x) {
        long long int  temp = x;
        long long int  res = 0;
        while(temp>0){
            int digit  =  temp%10;
            res = res*10+digit;
            temp/=10;

        }
        if(res==x){
             return true;
        }
        return false;
    }
};