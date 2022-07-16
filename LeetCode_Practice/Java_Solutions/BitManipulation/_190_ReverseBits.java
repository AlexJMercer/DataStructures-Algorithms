package LeetCode_Practice.Java_Solutions.BitManipulation;

import java.util.Scanner;

public class _190_ReverseBits {
    static int reverseBits (int n) {
        int rev = 0;
        for (int i=0; i<32; i++) {
            rev <<= 1;
            if ((n & 1) == 1) {
                rev++;
            }
            n >>= 1;
        }
        return rev;
    }

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = x.nextInt();
        System.out.print("Output : " + reverseBits(n));
        x.close();
    }
}
