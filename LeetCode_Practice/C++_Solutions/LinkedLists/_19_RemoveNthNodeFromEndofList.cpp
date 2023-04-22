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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* endNode = head, *prev = head;

        while (n-- != 0)
        {
            endNode = endNode->next;
        }

        if (endNode == nullptr)
            return head->next;

        while (endNode->next != nullptr)
        {
            prev = prev->next;
            endNode = endNode->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};