#include "AllInclude.h"

class Solution {
    public:
        int rangeSumBST(TreeNode* root, int L, int R) {
            if(!root) return 0;
            if(root->val < L)
                return rangeSumBST(root->right, L, R);
            else if(root->val > R)
                return rangeSumBST(root->left, L, R);
            else if(root->val >= L && root->val <= R)
                return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);

            return 0;   // never to be run, only for compile
        }
};