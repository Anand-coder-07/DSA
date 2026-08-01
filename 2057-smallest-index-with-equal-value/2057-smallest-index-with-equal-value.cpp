class Solution {
public:
    int smallestEqual(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int a = i%10;

            if(nums[i]==a) {
                return i;
            }
        }
        return -1;        
    }
};