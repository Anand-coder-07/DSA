class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int n = nums.size();

        int count = 0;

        int last ;

        for(int i = 0; i < n; i++) {

            int x = nums[i];

            while(x!=0) {

                last = x%10;

                if(last == digit) {
                    count++;
                }
                x = x/10;
            }

        }
        return count;
    }
};