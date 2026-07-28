class Solution {
public:
    int climbStairs(int n) {
        
        int f = 0;
        int s = 1;

        int next ;

        while(n!=0) {
            next = f+s;
            f=s;
            s=next;
            n--;
        }
        return s;
    }
};