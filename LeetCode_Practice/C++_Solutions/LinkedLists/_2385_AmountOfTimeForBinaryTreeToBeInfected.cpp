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
public:
    int dist = 0;
    int amountOfTime(TreeNode* root, int start) {
        helper(root, start);
        return dist;
    }
    
    int helper(TreeNode* root, int start) {
        int depth = 0;
        if (root == nullptr) {
            return depth;
        }

        int left = helper(root->left, start);
        int right = helper(root->right, start);

        if (root->val == start) {
            dist = max(left, right);
            depth = -1;
        } else if (left >= 0 && right >= 0) {
            depth = max(left, right) + 1;
        } else {
            int distanceTotal = abs(left) + abs(right);
            dist = max(dist, distanceTotal);
            depth = min(left, right) - 1;
        }

        return depth;
    }

};