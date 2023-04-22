#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr)
            return nullptr;

        Node *left = root->left, *right = root->right, *next = root->next;
        if (left != nullptr)
        {
            left->next = right;
            if (next != nullptr)
            {
                right->next = next->left;
            }
            connect(left);
            connect(right);
        }   
        return root;
    }
};