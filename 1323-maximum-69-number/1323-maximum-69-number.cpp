class Solution {
public:
    int maximum69Number (int num) {

        vector<int> number;

        while( num!=0) {

            number.push_back(num%10);

            num/=10;   
        }
        reverse(number.begin(),number.end());

        int n = number.size();

        for(int i = 0; i < n; i++) {

            if(number[i] == 6) {
                number[i] =9;
                break;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {

            ans = ans*10+number[i];
        }
        return ans;
    }
};