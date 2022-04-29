class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1; 
        int r = *max_element(piles.begin(), piles.end());
        int res = r;
        
        while( l <= r){
           int hours = 0;
            int mid = (l + r)/2;
            for( int i = 0; i<piles.size(); i++) { 
                if(piles[i] <= mid){
                    hours += 1;
                }
                else{ 
                    if(piles[i]%mid == 0 ){
                        hours += piles[i] /mid;
                    }
                    else{
                       hours += ceil(piles[i] /mid) + 1;  
                    }
                }
            }
        
            if(hours <= h){
                res = min(res,mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return res;
    }
};
