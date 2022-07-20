package LeetCode_Practice.Java_Solutions.LinkedLists;

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class _206_ReversedLinkedList {
    public ListNode reverseList (ListNode head) {
        ListNode curr = null;
        ListNode temp = head;
        ListNode prev = null;
        
        while(temp != null) {
            prev = curr;
            curr = temp;
            temp = curr.next;
            curr.next = prev;
        }
        
        return curr; 
    }
}
