class Solution {
public:
    int tribonacci(int n) {

        if(n==0){
            return 0;
        }
        int first = 0;
        int second = 1;
        int third =  1;
        int i =  3;
        int sum = 0;
        while(i<=n ){
            sum =  first+second+third;
            first = second;
            second =  third;
            third = sum;
        i++;
        } 
        return third;
    }
};                      