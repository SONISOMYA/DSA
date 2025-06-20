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

    int maxi = INT_MIN;
    int height (TreeNode * root){
        if(root == NULL) return 0;
        

        int lsum = max(0,height(root->left));
        int rsum = max(0,height(root->right));
        // if(lsum <0 || rsum <0){
        //     return ;
        // }
        maxi = max(maxi ,root->val+lsum+rsum);
        return root->val + max(lsum, rsum);
        
}
    int maxPathSum(TreeNode* root) {
        height(root);
        return maxi;
        
        
        
    }
};