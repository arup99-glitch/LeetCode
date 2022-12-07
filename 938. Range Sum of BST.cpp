class Solution {
public:
    int ans=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==0)return ans;
        if(root->val>=low && root->val<=high){
                ans+=root->val;
        }
        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);
        return ans;
    }
};
