class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n;
       

        
        while(true){
                 int prod = 1;
                 int temp =  num;
                 while(temp>0){
                    int digits =  temp%10;
                    prod *=  digits;
                    temp/=10;
                 }
                 if(prod%t==0){
                    return num;
                 }
                 num++;
        }
    }
};