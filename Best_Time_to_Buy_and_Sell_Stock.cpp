class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maximumProfit = 0;
        
        int l = 0;
        int r = 1;
        int minVal = prices[0];
        while( r < n) {
            if(prices[r] > minVal){
                maximumProfit = max(maximumProfit,prices[r] - minVal);
            }
            minVal = min(minVal,prices[r]);
            r++;
        }
        return maximumProfit; 
    }
};
