class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int n = nums.size();

        map<int,int> mpp;

        for(int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        vector<int> ans;

        for(auto pa: mpp) {
            if(pa.second==1) {
                ans.push_back(pa.first);
            }
        }
        return ans;
    }
};