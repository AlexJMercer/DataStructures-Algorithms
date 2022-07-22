#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
    public:
        bool isPalindrome (ListNode *head)
        {
            ListNode *slow = head, *fast = head, *prev, *temp;
            while (fast != nullptr && fast->next != nullptr)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            prev = slow;
            slow = slow->next;
            prev->next = nullptr;

            while (slow != nullptr)
            {
                temp = slow->next;
                slow->next = prev;
                prev = slow;
                slow = temp;
            }
            fast = head;
            slow = prev;
            while (slow != nullptr)
            {
                if (fast->val != slow->val)
                    return false;
                fast = fast->next;
                slow = slow->next;
            }
            return true;
        }
};