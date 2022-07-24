package LeetCode_Practice.Java_Solutions.LinkedLists;

import java.util.HashMap;

class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}

public class _138_CopyListWithRandomPointer {
    public Node copyRandomList(Node head) {
        // Node iter = head;

        // while (iter != null) {
        //     Node copy = new Node(iter.val);
        //     iter.next = copy;
        //     copy.next = iter.next;
        //     iter = iter.next;
        // }
        // iter = head;

        // while (iter != null) {
        //     if (iter.random != null)
        //         iter.next.random = iter.random.next;
        //     iter = iter.next.next;
        // }

        // iter = head;
        // Node copyHead = new Node(0);
        // Node copyIter = copyHead;

        // while (iter != null) {
        //     copyIter.next = iter.next;
        //     copyIter = iter.next;
        //     iter.next = iter.next.next;
        //     iter = iter.next.next;
        // }

        // return copyHead.next;

        if (head == null)
            return null;
        HashMap<Node, Node> map = new HashMap<Node, Node>();
        Node node = head;

        while (node != null) {
            map.put(node, new Node(node.val));
            node = node.next;
        }

        node = head;
        while (node != null) {
            map.get(node).next = map.get(node.next);
            map.get(node).random = map.get(node.random);
            node = node.next;
        }

        return map.get(head);
    }
}
