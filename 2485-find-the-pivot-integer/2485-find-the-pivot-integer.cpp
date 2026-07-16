class Solution {
public:
    int pivotInteger(int n) {

        int left = 0;

        int x = 1;

        while( x <= n) {

            int left = x*(x+1)/2;
            int right = (n-x+1)*(x+n)/2;

            if(left == right) {
                return x;
            }
            x++;
        }
        return -1;
    }
};