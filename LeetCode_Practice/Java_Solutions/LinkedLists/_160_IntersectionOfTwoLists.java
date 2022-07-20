package LeetCode_Practice.Java_Solutions.LinkedLists;

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class _160_IntersectionOfTwoLists {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode A = headA;
        ListNode B = headB;
        if (headA == null || headB == null)
            return null;
        
        while (A != B) {
            if (A == null) {
                A = headB;
            }
            else
                A = A.next;
            
            if (B == null) {
                B = headA;
            }
            else
                B = B.next;
        }
        return A;
    }
}
