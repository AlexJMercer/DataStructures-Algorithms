package LeetCode_Practice.LinkedLists;

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class _141_LinkedListCycle {
    public boolean hasCycle (ListNode head) {
        ListNode cur = head;
        if (head == null || head.next == null)
            return false;
        while (head != null && head.next != null) {
            cur = cur.next;
            head = head.next.next;
            if (cur == head)
                return true;
        }
        return false;
    }
}
