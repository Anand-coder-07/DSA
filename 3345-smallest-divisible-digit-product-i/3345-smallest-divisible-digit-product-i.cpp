class Solution {
public:
    int smallestNumber(int n, int t) {

        int x;
        int last;

        int flag = 0;

        while(flag==0) {
            x=n;
            int pro =1;
            while(x!=0) {

                last = x%10;

                pro = pro*last;

                x = x/10;
            }
            if(pro%t==0) {
                return n;
            }
            n++;
        }
        return 0;
    }
};