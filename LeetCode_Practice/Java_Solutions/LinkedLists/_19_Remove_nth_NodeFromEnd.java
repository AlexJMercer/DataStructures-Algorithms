package LeetCode_Practice.Java_Solutions.LinkedLists;

class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

public class _19_Remove_nth_NodeFromEnd {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode cur, endNode = head;
        cur = endNode;
                
        while (n-- > 0) {
            endNode = endNode.next;
        }
        
        if (endNode == null)
            return head.next;
        
        while (endNode.next != null) {
            endNode = endNode.next;
            cur = cur.next;
        }
        cur.next = cur.next.next;
        return head;
    }
}
