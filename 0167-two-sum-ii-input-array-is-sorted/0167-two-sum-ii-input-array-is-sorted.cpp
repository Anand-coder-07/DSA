class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int lf = 0; 
        int rg = numbers.size()-1;

        while (lf<=rg) {

            int sum = numbers[lf]+numbers[rg];

            if(sum == target) {
                break;
            }
            else if(sum > target) {
                rg--;
            }
            else{
             lf++;
            }
        }
        return {lf+1,rg+1};
    }
};