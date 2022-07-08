package Linked_Lists;

/**
 * Node class declares a Linked List.
 * Getters & Setters implemented.
 */
class Node {
    public int data;
    public Node next;

    Node() {
        this.data = Integer.MIN_VALUE;
        this.next = null;
    }

    Node(int data) {
        this.data = data;
        this.next = null;
    }

    public Node getNext() {
        return next;
    }

    public void setNext(Node node) {
        next = node;
    }

    public int getData() {
        return data;
    }

    public void setData(int elem) {
        data = elem;
    }

    public void disp() {
        System.out.print(data + " ");
    }
}

/**
 * Main Class for Linked List
 * For implementation of Linked List Data Structures
 * Contains Insertion and Deletion functions,
 * at Head, Tail & Arbitrary Node.
 */
public class SinglyLinkedList {
    private int length;
    Node head;

    SinglyLinkedList() {
        length = 0;
    }
    
    public synchronized Node getHead() {
        return head;
    }

    public synchronized void insertAtBegin(Node node) {
        node.setNext(head);         // Sets the new node as the head
        head = node;
        length++;
    }

    public synchronized void insertAtEnd(Node node) {
        if (head == null)
            head = node;
        else {
            Node p, q;
            for (p = head; (q = p.getNext()) != null; p = q) {}
            p.setNext(node);
        }
        length++;
    }
    
    public void insert(int data, int pos) {
        if (pos < 0) {
            pos = 0;
        }
        if (pos > length) {
            pos = length;
        }

        if (head == null)
            head = new Node(data);
        else if (pos == 0) {
            Node node = new Node(data);
            node.next = head;
            head = node;
        }
        else {
            Node node = head;
            for (int i = 1; i < pos; i++) {
                node = node.getNext();
            }
            Node newNode = new Node(data);
            newNode.next = node.next;
            node.setNext(newNode); 
        }
        length++;
    }

    public static void main(String[] args) {
        
    }
}