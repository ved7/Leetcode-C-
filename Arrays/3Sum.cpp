// Leetcode Link: https://leetcode.com/problems/3sum/

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            int left = i + 1;
            int right = n - 1;

            while (left < right && left < n)
            {
                if (nums[left] + nums[right] == -nums[i])
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (right != 0 && nums[right] == nums[right - 1])
                        right--;
                    while (left != n - 1 && nums[left] == nums[left + 1])
                        left++;
                    left++;
                    right--;
                }
                else if (nums[left] + nums[right] > -nums[i])
                {
                    while (right != 0 && nums[right] == nums[right - 1])
                        right--;
                    right--;
                }
                else
                {
                    while (left != n - 1 && nums[left] == nums[left + 1])
                        left++;
                    left++;
                }
            }
            while (i != n - 1 && nums[i] == nums[i + 1])
                i++;
        }
        return res;
    }
};