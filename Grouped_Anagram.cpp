class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>> groupedString;
        for (auto it : mp)
        {
            groupedString.push_back(it.second);
        }
        return groupedString;
    }
};
