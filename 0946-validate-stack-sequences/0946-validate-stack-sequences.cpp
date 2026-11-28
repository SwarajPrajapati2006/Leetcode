class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st1;
        stack<int>st2;

        for(int i =  popped.size()-1;i>=0;i--){
            st2.push(popped[i]);
        }
        for(int i = 0;i<pushed.size();i++){
            
                st1.push(pushed[i]);
            
         
            while(!st1.empty() && !st2.empty() && st1.top() == st2.top()){
                st1.pop();
                st2.pop();
            }
        }

        if(st1.empty()&& st2.empty()){
            return true;
        }
        return false;
    }
};