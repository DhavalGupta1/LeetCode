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
    pair<int,int> make(TreeNode *root,int &res){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int> sum1=make(root->left,res);
        pair<int,int> sum2=make(root->right,res);
        int sum=sum1.first+sum2.first+root->val;
        int count=sum1.second+sum2.second+1;
        int avg=((float)sum/(float)count);
        if(avg==root->val) res++;
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        int res=0;
        make(root,res);
        return res;
    }
};