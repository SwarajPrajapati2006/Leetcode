class Solution {
public:
    bool isSameAfterReversals(int num) {
         int reverse1 = 0;
   int temp = num;
    while(temp>0){
      int digit = temp%10;
      reverse1 = reverse1*10+digit;
      temp = (temp/10);
    }
  
  int temp2 = reverse1;
  int reverse2 = 0;
  while(temp2>0){
    int digit = temp2%10;
    reverse2 = reverse2*10+ digit;
    temp2 = (temp2/10);
    
  }
  if(reverse2==num){
    return true;
  }
  return false;
    }
};