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
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1, leaf2;
        helper(root1, leaf1);
        helper(root2, leaf2);

        return leaf1 == leaf2;
    }

    void helper(TreeNode* node, vector<int>& arr) {
        if (node == nullptr)
            return;
        
        if (node->left == nullptr && node->right == nullptr) {
            arr.push_back(node->val);
            return;
        }

        helper(node->left, arr);
        helper(node->right, arr);
    }    
};