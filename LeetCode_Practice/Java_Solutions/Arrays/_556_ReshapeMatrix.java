package LeetCode_Practice.Java_Solutions.Arrays;

public class _556_ReshapeMatrix {
    public int[][] matrixReshape (int[][] mat, int r, int c) {
        int m = mat.length;
        int n = mat[0].length;

        if (r*c != m*n)
            return mat;

        int[][] res = new int[r][c];
        for (int i=0; i < m*n; i++) {
            res[i / c][i % c] = mat[i / n][i % n];
        }
        return res;
    }
}
