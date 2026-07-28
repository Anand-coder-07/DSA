class Solution {
public:
    int lengthOfLastWord(string s) {

        int n = s.size();

        int count = 0;
        int pre = 0;

        for(int i = 0; i < n; i++) {

            if(s[i]==' ') {
                if(count!=0) {
                    
                    pre = count;

                }
               
                count = 0;
            }
            else {
                count++;
            }
        }
        if(count!=0) {
            return count;
        }
        return pre;
    }
};