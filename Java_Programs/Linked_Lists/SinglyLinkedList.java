package Linked_Lists;

import java.util.Scanner;

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

    public int length() {
        return length;
    }

    public boolean isEmpty() {
        return (length == 0);
    }

    public void clear() {
        head = null;
        length = 0;
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

    public synchronized Node removeFromBegin() {
        Node node = head;
        if (node != null) {
            head = node.getNext();
            node.setNext(null);
        }
        return node;
    }

    public synchronized Node getLast() {
        if (head == null) {
            return null;
        }
        if (head.getNext() == null) {
            return head;
        }
        Node node = head.getNext();
        while (node.getNext() != null) {
            node = node.getNext();
        }
        return node;
    }

    public synchronized Node removeFromEnd() {
        if (head == null)
            return null;
        Node p = head, q = null, next = head.getNext();
        if (next == null) {
            head = null;
            length--;
            return p;
        }
        while ((next = p.getNext()) != null) {
            q = p;
            p = next;
        }
        q.setNext(null);
        length--;
        return p;
    }

    public synchronized void removeMatched(Node node) {
        if (head == null)
            return;
        if (node.equals(head)) {
            head = head.getNext();
            length--;
            return;
        }
        Node p = head, q = null;
        while ((q = p.getNext()) != null) {
            if (node.equals(q)) {
                p.setNext(q.getNext());
                length--;
                return;
            }
            p = q;
        }
    }

    public void remove(int pos) {
        if (pos == 0)
            pos = 0;
        if (pos >= length)
            pos = length-1;
        if (head == null)
            return;
        
        if (pos == 0)
            head = head.getNext();
        else {
            Node node = head;
            for (int i=1; i < pos; i++) {
                node = node.next;
            }
            node.setNext(node.getNext().getNext());
        }
        length--;
    }

    public int getPosition(int data) {
        Node node = head;
        int pos = 0;
        while (node != null) {
            if (node.data == data)
                return pos;
            pos++;
            node = node.getNext();
        }
        return -1;
    }

    public String toString() {
        String res = "[";
        if (head == null) {
            return res + "]";
        }
        res = res + head.getData();
        Node temp = head.getNext();
        while (temp != null) {
            res = res + "," + temp.getData();
            temp = temp.getNext();
        }
        return res + "]";
    }

    public static void main(String[] args) {
        SinglyLinkedList list = new SinglyLinkedList();
        Scanner x = new Scanner(System.in);
        
        System.out.print("Enter number of elements to insert : ");
        int n = x.nextInt();
        for (int i=0; i < n; i++) {
            list.insert(x.nextInt(), i+1);
        }
              

        x.close();
    }
}