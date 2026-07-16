class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int n = nums.size();

        int totalSum = 0;

        int count = 0;

        for(int num:nums) {
            totalSum+=num;
        }
        int leftSum = 0;

        for( int i = 0; i < n-1; i++) {
           
            
            for( int j = 0; j <=i; j++) {
                leftSum = leftSum+nums[j];
            }
            int rightSum = totalSum-leftSum;

            int no = leftSum-rightSum;

            if(no%2==0) {
                count++;
            }
        }
        return count;
    }
};