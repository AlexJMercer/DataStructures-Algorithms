package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.ArrayList;
import java.util.List;

public class _118_PascalTriangle {
    public List<List<Integer>> generate(int numRows) {
        // First we make a list for each row,
        // and a nested list for the entire pascal's triangle
        List<List<Integer>> triangle = new ArrayList<List<Integer>>();
        List<Integer> row = new ArrayList<Integer>();

        // First for-loop iterates through the Triangle making as
        // many rows as needed depending on numRows
        for (int i=0; i < numRows; i++) {
            row.add(0, 1);              // Adds 1 at the beginning of the list.

            // Second for-loop iterates through the individual row
            // between the extreme elements.
            for (int j=1; j < row.size()-1; j++) {
                row.set(j, row.get(j) + row.get(j+1));
                // Adds last two elements and puts sum in the
                // new list at position in between previous elements
            }
            triangle.add(new ArrayList<Integer>(row));
            // Adds the newly created list to the main List.
        }
        return triangle;
    }
}
