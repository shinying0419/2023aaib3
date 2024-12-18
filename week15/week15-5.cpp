//week15-5.cpp 學習計畫(隱藏) Binary Tree 第二題
class Solution {
public:
    int helper(TreeNode* root){
        if(root == nullptr) return INT_MAX;
        if(root ->left == nullptr && root->right==nullptr) return 1;//葉子
        //葉子是有兩個小腳腳
        int ans1 = helper(root -> left);
        int ans2 = helper(root -> right);
        return min(ans1,ans2)+1;
    }
    int minDepth(TreeNode* root) {
        int ans=helper(root);
        if(ans==INT_MAX) return 0;
        return ans;
    }
};


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