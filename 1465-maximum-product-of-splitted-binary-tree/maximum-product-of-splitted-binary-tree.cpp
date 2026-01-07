class Solution {
    long long totalSum = 0;
    long long maxProd = 0;
    const int MOD = 1e9 + 7;

    long long dfsSum(TreeNode* root) {
        if (!root) return 0;
        return root->val + dfsSum(root->left) + dfsSum(root->right);
    }

    long long dfsProduct(TreeNode* root) {
        if (!root) return 0;

        long long left = dfsProduct(root->left);
        long long right = dfsProduct(root->right);

        long long subSum = root->val + left + right;
        maxProd = max(maxProd, subSum * (totalSum - subSum));

        return subSum;
    }

public:
    int maxProduct(TreeNode* root) {
        totalSum = dfsSum(root);
        dfsProduct(root);
        return maxProd % MOD;
    }
};
