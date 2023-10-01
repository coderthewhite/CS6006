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
bool compare(TreeNode* p, TreeNode* q) {
    if (p == NULL && q == NULL) {
        return true;
    }
    //p or q is NOT NULL
    //1. p and q are not NULL
    //2. p is not NULL and q is NULL
    //3. p is NULL and q is not NULL
    if (p == NULL || q == NULL) {
        return false;
    }
    bool diff = (p->val == q->val);
    bool left = compare(p->left, q->left);
    bool right = compare(p->right, q-> right);
    return diff && left && right;
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compare(p, q);
    }
};
