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

 // recursion question
 // subroot will see if it exists on the path down root
 // name that existing starting point as curr 
 // if it does exist, recurse and return: check subroot->left == curr->left && subroot->right == curr->right
 // otherwise, return false


class Solution {

private: 
    bool isSame(TreeNode* root, TreeNode* subRoot) {

        TreeNode* curr = root;

        if (curr == nullptr && subRoot == nullptr) {
            return true;
        }

        if (curr == nullptr || subRoot == nullptr) {
            return false;
        }

        if (curr->val != subRoot->val) {
            return false;
        }

        return isSame(curr->left, subRoot->left) && isSame(curr->right, subRoot->right);
    }


public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        

        if (subRoot == nullptr) {
            return true; 
        }

        if (root == nullptr) {
            return false;
        }

        if (isSame(root, subRoot)) {
            return true;
        }

        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
