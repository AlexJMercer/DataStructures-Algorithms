package LeetCode_Practice.Java_Solutions.BitManipulation;

import java.util.Scanner;

public class _191_NumberOfOneBits {
    static int hammingWeight(int n) {
        return Integer.bitCount(n);
    }
    
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = x.nextInt();
        System.out.print("Output : " + hammingWeight(n));
        x.close();
    }
}
