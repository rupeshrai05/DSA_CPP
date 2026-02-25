class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        TreeNode* l = root;
        TreeNode* r = root;
        int lh = 0, rh = 0;

        while (l) {
            lh++;
            l = l->left;
        }
        while (r) {
            rh++;
            r = r->right;
        }

        if (lh == rh)
            return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};