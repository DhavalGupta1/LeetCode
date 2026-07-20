class Solution {
public:
    int res = 0;
    int check(TreeNode* root){
        if(root == nullptr) return 0;
        int max1 = check(root->left);
        int max2 = check(root->right);
        if(root->val>=max(max1,max2)){
            res++;
            return root->val;
        }
        return max(max1,max2);
    }

    int countDominantNodes(TreeNode* root) {
        res = 0;
        check(root);
        return res;
    }
};