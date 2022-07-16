package LeetCode_Practice.Java_Solutions.Strings;

import java.util.Scanner;

public class _557_ReverseWordsInAString {
    static String reverseWords(String s) {
        char arr[] = s.toCharArray();
        int cur=0, end=0;
        char temp;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == ' ') {
                end = i-1;
            
                for (int m=cur, n=end; m < n; m++, n--) {
                    temp = arr[m];
                    arr[m] = arr[n];
                    arr[n] = temp;
                }
                cur = i+1;
                i++;
            }
            else if (i == arr.length-1)
            {
                end = i;
                for (int m=cur, n=end; m < n; m++, n--) {
                    temp = arr[m];
                    arr[m] = arr[n];
                    arr[n] = temp;
                }
            }
        }
        return String.valueOf(arr);
    }
    
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String s = x.nextLine();
        System.out.print("Output : ");
        System.out.print(reverseWords(s));
        x.close();
    }
}
