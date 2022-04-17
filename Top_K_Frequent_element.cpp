class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> count;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }

        for (auto it = count.begin(); it != count.end(); it++)
        {
            minHeap.push({it->second, it->first});
            if (minHeap.size() > k)
            {
                minHeap.pop();
            }
        }
        pair<int, int> p;
        while (minHeap.size() > 0)
        {
            p = minHeap.top();
            res.push_back(p.second);
            minHeap.pop();
        }

        return res;
    }
};
