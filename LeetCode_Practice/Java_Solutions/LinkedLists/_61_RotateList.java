package LeetCode_Practice.Java_Solutions.LinkedLists;

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class _61_RotateList {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null)
            return head;
        
        ListNode tail = head;
        int len = 1;

        while (tail.next != null) {
            tail = tail.next;
            len++;
        }
        tail.next = head;
        tail = head;
        k %= len;
        for (int i=0; i < len-k-1; i++) {
            tail = tail.next;
        }

        head = tail.next;
        tail.next = null;
        return head;
    }
}
