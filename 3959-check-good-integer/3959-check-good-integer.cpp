class Solution {
public:
    bool checkGoodInteger(int n) {

        string s = to_string(n);

        int dig = 0;

        int sr = 0;

        int ls;

        while(n!=0) {

            ls = n%10;

            dig = dig +ls;
            sr = sr+ls*ls;
            n = n/10;
        }
        if(sr-dig>=50){
            return 1;
        }
        return 0;
    }
};