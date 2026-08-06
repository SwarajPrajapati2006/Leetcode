class Solution {
public:
    bool checkRecord(string s) {

        int lcount = 0;
        int Acount = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == 'A') {
                Acount++;
                lcount = 0;

                if(Acount >= 2)
                    return false;
            }
            else if(s[i] == 'L') {
                lcount++;

                if(lcount >= 3)
                    return false;
            }
            else {
                lcount = 0;
            }
        }

        return true;
    }
};