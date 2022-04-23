class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();

        vector<int> maxHeight(n, 0);
        vector<int> minHeight(n, 0);

        int minH = height[0];
        minHeight[0] = height[0];
        for (int i = 1; i < n; i++)
        {
            minHeight[i] = max(height[i], minH);
            if (minHeight[i] > minH)
            {

                minH = minHeight[i];
            }
        }
        int maxH = height[n - 1];
        maxHeight[0] = height[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            maxHeight[i] = max(height[i], maxH);
            if (maxHeight[i] > maxH)
            {
                maxH = maxHeight[i];
            }
        }

        int water = 0;
        for (int i = 0; i < n; i++)
        {
            int res = min(minHeight[i], maxHeight[i]) - height[i];
            if (res >= 0)
            {
                water += res;
            }
        }
        return water;
    }
};
