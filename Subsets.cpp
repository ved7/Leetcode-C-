class Solution {
public:
    vector<vector<int>> res;
    vector<int> current;
    void dfs(int i, vector<int>& nums) {
        if(i >= nums.size()) {
            res.push_back(current);
            return ;
        }
        //include nums[i]
        current.push_back(nums[i]);
        dfs(i+1,nums);
        
        //do not include nums[i]
        current.pop_back();
        dfs(i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(0,nums);
        return res;
    }
};
