/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int count_depth(struct TreeNode* root, int depth) {
    if (root == NULL) {
        return depth;
    }

    int left = count_depth(root->left, depth + 1);
    int right = count_depth(root->right, depth + 1);
    if (left > right) {
        return left;
    }

    return right;
}
int maxDepth(struct TreeNode* root) {
    int depth = 0;
    return count_depth(root, depth);
}