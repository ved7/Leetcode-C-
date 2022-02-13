/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findMaxDiam(TreeNode *root, int &diameter){
        if(!root) return 0;
        
        int l = findMaxDiam(root->left,diameter);
        int r = findMaxDiam(root->right,diameter);
        
        diameter = max(diameter,l+r);
        return 1 + max(l, r);
       
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) {
            return 0;
        }
        int diameter = 0;
        findMaxDiam(root,diameter);
        return diameter;
    }
};
