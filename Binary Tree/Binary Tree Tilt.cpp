class Solution {
public:
    int tiltSum(TreeNode *root, int &sum){
        if(!root) return 0;
        
        int lSum = tiltSum(root->left,sum);
        int rSum = tiltSum(root->right,sum);
        sum += abs(lSum-rSum);
        
        return root->val + lSum + rSum;
    }
    
    int findTilt(TreeNode* root) {
       int sum = 0;
       tiltSum(root,sum);
        return sum;
    }
};
