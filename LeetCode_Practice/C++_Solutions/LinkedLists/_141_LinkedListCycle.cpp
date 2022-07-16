#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
    public:
        bool hasCycle (ListNode *head)
        {
            ListNode *cur = head;
            
            while (head != NULL && head->next != NULL)
            {
                cur = cur->next;
                head = head->next->next;
                if (cur == head)
                    return true;
            }
            return false;
        }
};

