class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int bigg = INT_MIN;

        int ans = -1;

        int n = nums.size();

        for( int i = 0; i < n; i++) {


            if(bigg<=nums[i]) {
                bigg= nums[i];
                ans = i;
            }
        }
        return ans;
    }
};