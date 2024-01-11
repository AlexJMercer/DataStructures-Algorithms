#include <iostream>
#include <algorithm>

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
    int res = 0;
public:
    int maxAncestorDiff(TreeNode* root) {
        if ( !root ) { return 0; }
        diff(root, root->val, root->val);
        return res;
    }

    void diff(TreeNode* node, int currMin, int currMax) {
        if ( !node ) { return; }

        res = max(res, max( abs(currMin - node->val), abs(currMax - node->val) ));
        currMin = min(currMin, node->val);       
        currMax = max(currMax, node->val);      
        diff(node->left, currMin, currMax);
        diff(node->right, currMin, currMax);
    }
};