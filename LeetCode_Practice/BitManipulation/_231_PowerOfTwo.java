package LeetCode_Practice.BitManipulation;

import java.util.Scanner;

public class _231_PowerOfTwo {
    static boolean isPowerOfTwo(int n) {
        return (n > 0) && ((n & n-1) == 0);
    }
    
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = x.nextInt();
        System.out.print("Output : " + isPowerOfTwo(n));
        x.close();
    }
}
