#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
            
        ListNode *temp, *slow, *fast = head;
        slow = temp = fast;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                while (temp != slow)
                {
                    temp = temp->next;
                    slow = slow->next;
                }
                return temp;
            }
        }
        return nullptr;
    }
};