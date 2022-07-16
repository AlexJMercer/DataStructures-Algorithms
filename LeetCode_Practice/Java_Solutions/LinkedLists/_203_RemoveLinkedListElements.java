package LeetCode_Practice.Java_Solutions.LinkedLists;

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class _203_RemoveLinkedListElements {
    public ListNode removeElements(ListNode head, int val) {
        ListNode cur = head;
        if (head == null)
            return null;
        while (head != null && head.val == val)
            head = head.next;
        while (cur != null && cur.next != null)
        {
            if (cur.next.val == val)
                cur.next = cur.next.next;
            else
                cur = cur.next;
        }
        return head;
    }
}
