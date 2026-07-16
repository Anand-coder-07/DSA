class Solution {
public:
    bool isSameAfterReversals(int num) {

        if(num==0) {
            return true;
        }
        string str = to_string(num);

        int no = str.size();

        if(str[no-1]=='0') {
            return false;
        }
        return true;
        
    }
};