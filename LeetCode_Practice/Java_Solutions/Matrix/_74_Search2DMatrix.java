package LeetCode_Practice.Java_Solutions.Matrix;

public class _74_Search2DMatrix {
    public boolean searchMatrix (int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0)
            return false;
        int n = matrix.length, m = matrix[0].length;
        int low = 0, high = n * m - 1;
        while (low <= high) {
            int mid = (high + low)/2;
            if (matrix[mid / m][mid % m] == target)
                return true;
            if (matrix[mid / m][mid % m] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
}
