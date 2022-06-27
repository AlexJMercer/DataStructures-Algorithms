package Linked_Lists;

import org.w3c.dom.Node;

public class DoublyLinkedList<T> {
    private int size = 0;
    private Node <T> head = null;
    private Node <T> tail = null;

    private class Node<T> {
        int data;
        Node<T> prev, next;

        @Override public String toString() {
            return data.toString();
        }
    }

    @Override public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("[ ");
        Node<T> trav = head;
        while (trav != null) {
            sb.append(trav.data);
            if (trav.next != null) {
                sb.append(", ");
            }
            trav = trav.next;
        }
        sb.append(" ]");
        return sb.toString();
    }

    public void clear() {
        Node <T> trav = head;
        while (trav != null) {
            Node <T> next = trav.next;
            trav.prev = trav.next = null;
            trav.data = null;
            trav = next;
        }
        head = tail = trav = null;
        size = 0;
    }
}
