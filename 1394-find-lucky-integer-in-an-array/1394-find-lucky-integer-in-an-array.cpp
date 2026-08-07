class Solution {
public:
    int findLucky(vector<int>& arr) {

        map<int,int> mpp;
        int n = arr.size();
        for(int i = 0; i < n; i++) {

            mpp[arr[i]]++;
        }
        vector<int> ans;

        for(auto p:mpp) {
            if(p.second==p.first) {
                ans.push_back(p.first);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) return -1;
        return ans[ans.size()-1];
    }
};