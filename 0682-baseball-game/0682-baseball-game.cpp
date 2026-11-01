class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
      
        int sum = 0;

        for(int i = 0;i<operations.size();i++){
            if(operations[i]=="+"){
                int a =  st.top();
                st.pop();
                int b = st.top();
              

                st.push(a);
                


                st.push(a+b);
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
      return sum;

    }
};