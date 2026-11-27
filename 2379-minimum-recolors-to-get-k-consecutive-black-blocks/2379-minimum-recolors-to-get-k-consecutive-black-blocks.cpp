class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        // if(blocks.size()<k){
        //     return 0;
        // }
        int i = 0;
        string res = "";
        
        int minMove = INT_MAX;

        for(int i = 0;i<=blocks.size()-k;i++){
            string s = blocks.substr(i,k);
            int move = 0;

            for(int j  = 0;j<s.size();j++){
                if(s[j]=='W'){
                    move++;
                }
            }
            minMove =  min(move,minMove);
        }
    return minMove;
       



        }
        
    
};