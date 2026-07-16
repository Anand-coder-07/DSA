class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefix(n);

        int currentMax = 0;

        for(int i = 0; i < n; i++) {

            currentMax = max(currentMax,nums[i]);
            prefix[i] = gcd(nums[i],currentMax);
        }
        sort(prefix.begin(),prefix.end());

        int fr = 0; 
        int ls = n-1;
        long long total = 0;

        while(fr < ls) {

            total = total + gcd(prefix[fr],prefix[ls]);
            fr++;
            ls--;
        }
        return total;
        
    }
};