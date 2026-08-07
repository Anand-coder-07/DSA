class Solution {
public:
    bool checkPerfectNumber(int n) {

        //if(n<10) return false;
        vector<int> arr;
        for(int i = 1; i < n; i++) {
            if(n%i==0) {
                arr.push_back(i);
            }
        }
        int m = arr.size();
        int sum = 0;
        for(int i = 0; i < m; i++) {
            sum+=arr[i];
        }
        if(sum==n) return true;
        return false;
        
    }
};