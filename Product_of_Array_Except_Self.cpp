// Approach: maintain two array prevMultiple which contain multiple of all previous elements in array and like wise 
// nextMultiple for all element occuring after(excluding itself in both cases) and finally resultant element will be next[index] * prev[index]
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> prevMultiple(n);
        vector<int> nextMultiple(n);
        prevMultiple[0] = 1;
        nextMultiple[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            prevMultiple[i] = prevMultiple[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            nextMultiple[i] = nextMultiple[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            prevMultiple[i] = prevMultiple[i] * nextMultiple[i];
        }
        return prevMultiple;
    }
};
