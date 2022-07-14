package LeetCode_Practice.LinkedLists;

public class _707_DesignLinkedList {
    private Node head;
    private int size = 0;
    
    private static class Node {
        int val;
        Node next;
        
        public Node(int val) {
            this(val, null);
        }
        
        public Node(int val, Node next) {
            this.val = val;
            this.next = next;
        }
    }
    
    public _707_DesignLinkedList() {
        
    }
    
    public int get(int index) {
        if (index < 0 || index >= size)
            return -1;
        
        Node curr = head;
        int i = 0;
        
        while (i != index) {
            curr = curr.next;
            i++;
        }
        
        return curr.val;
    }
    
    public void addAtHead(int val) {
        head = new Node(val, head);
        size++;
    }
    
    public boolean isEmpty() {
        return size == 0;
    }
    
    public int size() {
        return size;
    }
    
    public void addAtTail(int val) {
        if (isEmpty()) {
            addAtHead(val);
            return;
        }
        
        Node curr = head;
        while (curr.next != null) {
            curr = curr.next;
        }
        
        curr.next = new Node(val);
        size++;
    }
    
    public void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;
        
        if (index  == size) {
            addAtTail(val);
            return;
        }
        
        if (index == 0) {
            addAtHead(val);
            return;
        }
        
        Node curr = head;
        int i = 0;
        
        while (i+1 != index) {
            i++;
            curr = curr.next;
        }
        
        Node newNode = new Node(val, curr.next);
        curr.next = newNode;
        size++;
    }
    
    public void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;
        
        if (index  == 0) {
            head = head.next;
            size--;
            return;
        }
        
        Node curr = head;
        int i = 0;
        
        while (i+1 != index) {
            i++;
            curr = curr.next;
        }
        if (curr.next.next == null)
            curr.next = null;
        else
            curr.next = curr.next.next;
        
        size--;
    }

    public static void main(String[] args) {
        _707_DesignLinkedList list = new _707_DesignLinkedList();
        list.addAtHead(1);
        list.addAtTail(3);
        list.addAtIndex(1, 2);
        list.get(1);
        list.deleteAtIndex(1);
        list.get(1);
    }
}
