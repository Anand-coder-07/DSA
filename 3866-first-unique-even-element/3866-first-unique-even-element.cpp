class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int flag = 0;

            for(int j = 0; j < n; j++) {

                if(i==j) {
                    continue;
                }
                if(nums[i]==nums[j]) {
                    flag = 1;
                }
            }
            if(nums[i]%2==0 && flag == 0) {
                return nums[i];
            }
        }
        return -1;
    }
};