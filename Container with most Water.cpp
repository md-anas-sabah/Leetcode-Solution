class Solution {
public:
    int maxArea(vector<int>& height) {
         int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;
        while(i < j)
        {
            int currArea = min(height[i],height[j]) * (j - i);
            maxArea = max(maxArea, currArea);
            if(height[i] < height[j])
            {
                
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};