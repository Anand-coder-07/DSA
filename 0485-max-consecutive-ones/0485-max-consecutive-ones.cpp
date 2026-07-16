class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int preveious = 0;
        int current = 0;

        for( int i = 0; i < nums.size(); i++) {

            if(nums[i]==1){
                preveious++;
                current = max(current,preveious);
            }

            else if(nums[i]==0) {
                preveious = 0;
                current = max(current , preveious);
            }
        }

        return current ;
        
    }
};