class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maximumProfit = 0;
        
        int l = 0;
        int r = 1;
        
        while( r < n) {
            if(prices[r] > prices[l]){
                maximumProfit = max(maximumProfit,prices[r] - prices[l]); 
            }
            else{
                l = r;
            }
            r++;
        }
        return maximumProfit; 
    }
};
