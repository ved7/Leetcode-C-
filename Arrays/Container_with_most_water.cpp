// Leetcode Link : https://leetcode.com/problems/container-with-most-water/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        // Two pointer + greedy algorithm
        // TC : O(n)
        // SC : constant
        int low = 0;
        int high = height.size() - 1;

        int maxWater = INT_MIN;

        while (low < high)
        {
            int width = high - low;
            int length = min(height[low], height[high]);

            maxWater = max(maxWater, length * width);

            (height[low] < height[high]) ? low++ : high--;
        }
        return maxWater;
    }
};