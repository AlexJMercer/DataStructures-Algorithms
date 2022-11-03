#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode *removeElements(ListNode *head, int val)
        {
            ListNode *cur = head;
            if (head == nullptr)
                return nullptr;
            while (head != nullptr && head->val == val)
                head = head->next;
            while (cur != nullptr && cur->next != nullptr)
            {
                if (cur->next->val == val)
                    cur->next = cur->next->next;
                else
                    cur = cur->next;
            }
            return head;
        }
};