class Solution {
public:
    int minMoves(int target, int maxDoubles) {

        if(target == 1) return 0;

        int count = 0;
        

        if(maxDoubles==0) return target-1;

        while( target > 1) {

            if(target%2 == 0 && maxDoubles != 0) {
                target = target/2;
                maxDoubles--;
                count++;
            }
            else if(target%2 != 0 && maxDoubles != 0) {
                target--;
                count++;
            }
            else{
                target--;
                count++;
            }
        }
        return count; 
    }
};