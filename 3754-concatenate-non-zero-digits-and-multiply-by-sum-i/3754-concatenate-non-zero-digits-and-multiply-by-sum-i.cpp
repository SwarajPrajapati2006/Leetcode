class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string  res = to_string(n);

        string ans =  "";
        int sum = 0;
        for(int i = 0;i<res.size();i++){
            if(res[i]!='0'){
                ans+=res[i];
            }
        }
        int temp = n;
        while(temp>0){
            int digit = temp%10;
            sum+=digit;
            temp/=10;
        }
        long long  final = stoi(ans);
        return final*sum;

    }
};