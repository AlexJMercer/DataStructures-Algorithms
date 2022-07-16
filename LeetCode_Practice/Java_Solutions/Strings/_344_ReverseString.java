package LeetCode_Practice.Java_Solutions.Strings;

import java.util.Scanner;

public class _344_ReverseString {
    static void reverseString(char[] s) {
        int len = s.length;
        char temp;
        for (int i=0, j = len-1; i < (len)/2 ; i++, j--) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String s = x.next();
        char[] str = s.toCharArray();
        reverseString(str);

        for(int i=0; i < str.length; i++)
            System.out.print(str[i] + ", ");
        x.close();
    }
}