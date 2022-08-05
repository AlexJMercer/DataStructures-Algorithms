package LeetCode_Practice.Java_Solutions.Stacks;

import java.util.ArrayList;
import java.util.List;

public class _1441_BuildArrayWithStackOps {
    public List<String> buildArray (int[] target, int n) {
        List<String> list = new ArrayList<String>();
        for (int i = 1, top = 0; i <= n && top < target.length; i++) {
            list.add("Push");
            if (target[top] == i)
                top++;
            else
                list.add("Pop");
        }
        return list;
    }
}
