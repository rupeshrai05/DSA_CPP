class Codec {
public:
    // -------- SERIALIZE --------
    void preorder(TreeNode* root, string &s) {
        if (!root) return;
        s += to_string(root->val) + " ";
        preorder(root->left, s);
        preorder(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s = "";
        preorder(root, s);
        return s;
    }

    // -------- DESERIALIZE --------
    TreeNode* build(vector<int>& pre, int& i, int bound) {
        if (i == pre.size() || pre[i] > bound)
            return NULL;

        TreeNode* root = new TreeNode(pre[i++]);
        root->left = build(pre, i, root->val);
        root->right = build(pre, i, bound);

        return root;
    }

    TreeNode* deserialize(string data) {
        if (data.empty()) return NULL;

        vector<int> pre;
        stringstream ss(data);
        int x;

        while (ss >> x)
            pre.push_back(x);

        int i = 0;
        return build(pre, i, INT_MAX);
    }
};