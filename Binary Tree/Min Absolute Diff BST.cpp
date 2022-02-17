class Solution {
public:
    
    //Approach: in BST, left < root < prev, so we traverse in that order.
    void inOrder(TreeNode *root,int &res,int &prev){
        if(!root) return ;
        inOrder(root->left,res,prev);
        res = min(res,abs(prev-root->val));
        prev = root->val;
        inOrder(root->right,res,prev);
    }
    
    int getMinimumDifference(TreeNode* root) {
        int res = INT_MAX;
        int prev = INT_MAX;
        inOrder(root,res,prev);
        return res;
    }
};
