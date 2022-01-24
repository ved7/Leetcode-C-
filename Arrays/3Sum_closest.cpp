// Leetcode Link: https://leetcode.com/problems/3sum-closest/

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {

        int n = nums.size();
        int res = INT_MAX;
        int resSum = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {

            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int currSum = (nums[left] + nums[right] + nums[i]);

                if (target == currSum)
                    return currSum;

                if (res > abs(target - currSum))
                {
                    res = abs(target - currSum);
                    resSum = currSum;
                }
                else if (currSum > target)
                    right--;

                else
                    left++;
            }
        }
        return resSum;
    }
};