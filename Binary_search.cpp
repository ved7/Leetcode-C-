class Solution {
public:
    int bSearch(vector<int>& nums,int l, int r, int target){
        int mid = ( l + r ) / 2 ;
        if( l > r)
             return -1;
            if(nums[mid] == target){
           return mid; 
        }
        if(nums[mid] > target) {
            return bSearch(nums,l,mid-1,target);
        }
        else{
            return bSearch(nums,mid+1,r,target);
         }
    }
    
    int search(vector<int>& nums, int target) {
        int l = 0; 
        int r = nums.size();
        if(r == 1) {
            if(target == nums[0]) return 0;
            else return -1;
        }
        return bSearch(nums,l,r,target);    
        
    }
};
