class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int ans = 0;

        int n = operations.size();

        for(int i = 0; i < n; i++) {

            if(operations[i][0] == '-') {
                ans--;
                continue;
            }
            else if(operations[i][0] == '+') {
                ans++;
                continue;
            }
            else if(operations[i][0] == 'X') {
                if(operations[i][1] == '+') {
                    ans++;
                    continue;
                }
                else {
                    ans--;
                    continue;
                }
            }
        }
        return ans;
    }
};