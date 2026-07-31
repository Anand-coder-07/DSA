class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        for(int i = 0; i < n; i++) {

            int flag = 1;

            for(int j = 0; j < n; j++) {

                if(i!=j && nums[i]==nums[j]) {
                    flag = 0;
                }  
            }
            if(flag==1) {
                ans.push_back(nums[i]);
            }
        }

        int m = ans.size();

        int sum = 0;

        for(int i = 0; i < m; i++) {

            sum=sum+ans[i];
        }
        return sum;
    }
};