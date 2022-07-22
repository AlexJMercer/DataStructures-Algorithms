package LeetCode_Practice.Java_Solutions.LinkedLists;

class Node {
    public int val;
    public Node prev;
    public Node next;
    public Node child;
}

public class _430_FlattenMultilevelDoublyLinkedList {
    public Node flatten (Node head) {
        Node curr = head;

        while (curr != null) {
            if (curr.child == null) {
                curr = curr.next;
                continue;
            }
            
            Node temp = curr.child;
            while (temp.next != null)
                temp = temp.next;
            temp.next = curr.next;

            if (curr.next != null)
                curr.next.prev = temp;

            curr.next = curr.child;
            curr.child.prev = curr;
            curr.child = null;
        }
        return head;
    }
}
