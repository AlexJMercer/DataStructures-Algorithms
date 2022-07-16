package LeetCode_Practice.LinkedLists;

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class _21_MergeTwoSortedLists {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode res, head = new ListNode(0);
        res = head;
        if (list1 == null && list2 == null)
            return null;
        while (list1 != null || list2 != null) {
            if (list1 != null && list2 != null) {
                if (list1.val == list2.val) {
                    res.next = new ListNode(list1.val);
                    res = res.next;
                    list1 = list1.next;
                    res.next = new ListNode(list2.val);
                    res = res.next;
                    list2 = list2.next;
                }
                else if (list1.val > list2.val) {
                    res.next = new ListNode(list2.val);
                    list2 = list2.next;
                    res = res.next;
                }
                else {
                    res.next = new ListNode(list1.val);
                    list1 = list1.next;
                    res = res.next;
                }
            }
            else if (list1 != null && list2 == null) {
                res.next = new ListNode(list1.val);
                list1 = list1.next;
                res = res.next;
            }
            else {
                res.next = new ListNode(list2.val);
                list2 = list2.next;
                res = res.next;
            }
        }
        return head.next;
    }
}