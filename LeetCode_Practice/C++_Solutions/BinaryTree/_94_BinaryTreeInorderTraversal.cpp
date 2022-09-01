#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    public:
        vector<int> inorderTraversal(TreeNode *root)
        {
            vector<int> res;
            if (root == nullptr)
                return res;
            helper(root, res);
            return res;
        }

        void helper(TreeNode *root, vector<int> &res)
        {
            if (root != nullptr)
            {
                helper(root->left, res);
                res.push_back(root->val);
                helper(root->right, res);
            }
        }
};