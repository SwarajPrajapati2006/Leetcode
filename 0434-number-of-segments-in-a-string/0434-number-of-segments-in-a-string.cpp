class Solution {
public:
    int countSegments(string s) {

        if(s.size()==0){
            return 0;
        }
       long long count =  0;
    //    int sum = 0;
      for(int i = 0;i<s.size();i++){
        if(s[i]!=' ' && (i==0|| s[i-1]==' ')){
            count++;
        }
      }
      return count;

    }
};