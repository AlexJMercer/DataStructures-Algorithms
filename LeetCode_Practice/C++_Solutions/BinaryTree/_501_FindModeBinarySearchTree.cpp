#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
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
        int max_freq = 0, curr_freq = 0, pre_max = INT_MIN;
        vector<int> res;
        
        vector<int> findMode(TreeNode *root)
        {
            traversal(root);
            return res;
        }

        void traversal(TreeNode *root)
        {
            if (root == nullptr)
                return;
            traversal(root->left);
            if (pre_max == root->val)
                curr_freq++;
            else
                curr_freq = 1;
            
            if (curr_freq > max_freq)
            {
                res.clear();
                max_freq = curr_freq;
                res.push_back(root->val);
            }
            else if (curr_freq == max_freq)
                res.push_back(root->val);
            
            pre_max = root->val;
            traversal(root->right);
        }
};