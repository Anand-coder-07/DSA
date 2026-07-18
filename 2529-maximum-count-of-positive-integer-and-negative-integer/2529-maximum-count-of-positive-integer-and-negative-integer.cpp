class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int Ncount = 0;
        int Pcount = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] < 0) Ncount++;
            if(nums[i] > 0) Pcount++;
        }
        return max(Ncount,Pcount);
    }
};