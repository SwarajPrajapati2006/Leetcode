class Solution {
public:
    int climbStairs(int n) {

        if(n==1){
            return 1;
        }
     int first = 1;
     int second =  2;
     int i = 3;
    //  int count =0;
     while(i<=n){
        int sum  = first + second;
        first = second;
        second = sum;
        // count++;
        i++;
     }
     return second ;


    }
};