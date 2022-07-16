package LeetCode_Practice.Java_Solutions.Miscellaneous;

import java.util.Scanner;

public class _278_FirstBadVersion {
    static int bad;

    static boolean isBadVersion(int version) {
        return (version >= bad);
    }

    static int firstBadVersion(int n) {
        int low = 1, mid, high = n;
        
        while (low < high) {
            mid = low+(high-low)/2;
            
            if(isBadVersion(mid))
                high = mid;
            else
                low = mid+1;
        }
        return high;
    }
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter total number of versions : ");
        int n = x.nextInt();
        System.out.print("Enter first bad version : ");
        bad = x.nextInt();

        System.out.println("First bad version is " + firstBadVersion(n));
        x.close();
    }
}
