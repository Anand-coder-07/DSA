class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==0) {
            return {0};
        }

      
        vector<int> ans(n,0);

        int lf = 0;
        int rig = n-1;
        int ps = n/2;

        if(n%2!=0) {
            ans[ps] = 0;
            while(lf<rig) {
                ans[lf] = -ps;
                ans[rig]=ps;
                ps++;
                lf++;
                rig--;
            }

        }
        else if(n%2==0) {
            while(lf<rig) {
                ans[lf] = -ps;
                ans[rig]=ps;
                ps++;
                lf++;
                rig--;
            }

        }
        return ans;
    }
};