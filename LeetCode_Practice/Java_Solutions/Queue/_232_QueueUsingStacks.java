package LeetCode_Practice.Java_Solutions.Queue;

import java.util.Stack;

public class _232_QueueUsingStacks {
    
    Stack<Integer> s1 = new Stack<>();
    Stack<Integer> s2 = new Stack<>();

    public _232_QueueUsingStacks() {

    }

    public void push(int x) {
        s1.push(x);
    }

    public int pop() {
        while (!s1.empty()) {
            s2.push(s1.pop());
        }
        int ans = s2.pop();
        while (!s2.empty()) {
            s1.push(s2.pop());
        }
        return ans;
    }

    public int peek() {
        while (!s1.empty()) {
            s2.push(s1.pop());
        }
        int ans = s2.peek();
        while (!s2.empty()) {
            s1.push(s2.pop());
        }
        return ans;
    }

    public boolean empty() {
        return s1.empty();
    }
}
