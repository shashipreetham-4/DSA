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
    void inorderTraversal(TreeNode* root, vector<int> &arr){
        if(root == nullptr) return;

        inorderTraversal(root->left, arr);
        arr.push_back(root->val);
        inorderTraversal(root->right, arr);
    }

    TreeNode* createtree(vector<int> arr, int start, int end){
        if( start > end) return nullptr;

        int mid = start + (end-start)/2;
        TreeNode* newnode = new TreeNode(arr[mid]);
        newnode -> left = createtree(arr, start, mid-1);
        newnode -> right = createtree(arr, mid+1, end);

        return newnode;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorderTraversal(root, arr);

        return createtree(arr, 0, arr.size()-1);
    }
};