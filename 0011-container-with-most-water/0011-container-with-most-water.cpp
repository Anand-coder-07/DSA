class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();

        int low = 0;
        int high = n-1;

        int maxi = 0;

        while(low<=high) {
            int mini = min(height[low],height[high]);
            int ans = mini*(high-low);
            maxi = max(maxi,ans);
            if(height[low]<height[high]) low++;
           // if(height[high]<height[high-1]) high--;
           else high--;
        }
        return maxi;
    }
};