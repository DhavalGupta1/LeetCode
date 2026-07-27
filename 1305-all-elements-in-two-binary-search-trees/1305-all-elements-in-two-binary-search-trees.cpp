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
    vector<int> r1,r2;
    void add1(TreeNode *root){
        if(root==NULL){
            return;
        }
        add1(root->left);
        r1.push_back(root->val);
        add1(root->right);
        return;
    }
    void add2(TreeNode *root){
        if(root==NULL){
            return;
        }
        add2(root->left);
        r2.push_back(root->val);
        add2(root->right);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        add1(root1);
        add2(root2);
        int i=0,j=0;
        vector<int> res;
        while(i<r1.size()&&j<r2.size()){
            if(r1[i]<=r2[j]){
                res.push_back(r1[i]);
                i++;
            }
            else{
                res.push_back(r2[j]);
                j++;
            }
        }
        while(i<r1.size()){
            res.push_back(r1[i]);
            i++;
        }
        while(j<r2.size()){
            res.push_back(r2[j]);
            j++;
        }
        return res;
    }
};