package Java_Programs.Dynamic_Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class Dynamic_Array {

    public int[] arr;
    public int len, capacity = 0;

    public Dynamic_Array (int capacity) {
        if (capacity < 0)
            throw new IllegalArgumentException("Illegal Capacity" + capacity);
        this.capacity = capacity;
        arr = new int[capacity];
    }

    public Dynamic_Array (int[] array)
    {
        if (array == null)
            throw new IllegalArgumentException("Array cannot be null");
        arr = Arrays.copyOf(array, array.length);
        capacity = len = array.length;
    }

    public int size() {
        return len;
    }

    public boolean isEmpty() {
        return len == 0;
    }

    public int get(int index) {
        return arr[index];
    }

    public void set(int index, int elem) {
        arr[index] = elem;
    }

    public void add (int elem) {
        if (len + 1 > capacity)
        {
            if (capacity == 0)
                capacity = 1;
            else
                capacity *= 2;
                
            arr = Arrays.copyOf(arr, capacity);
        }
        arr[len++] = elem;
    }

    public void removeAtIndex (int rem_index) {
        System.arraycopy(arr, rem_index + 1, arr, rem_index, len - rem_index - 1);
        --len;
        --capacity;
    }

    public boolean remove (int elem) {
        for (int i=0; i < len; i++) {
            if (arr[i] == elem) {
                removeAtIndex(i);
                return true;
            }
        }
        return false;
    }

    public void reverse () {
        for (int i=0; i < len/2; i++) {
            int tmp = arr[i];
            arr[i] = arr[len - i - 1];
            arr[len - i - 1] = tmp;
        }
    }

    public void sort() {
        Arrays.sort(arr, 0, len);
    }

    @Override public String toString() {
        if (len == 0) 
            return "[]";
        else {
            StringBuilder sb = new StringBuilder(len).append("[");
            for (int i = 0; i < len - 1; i++) 
                sb.append(arr[i] + ", ");
            return sb.append(arr[len - 1] + "]").toString();
        }
    }
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);

        System.out.print("Enter number of elements : ");
        int capacity = x.nextInt();
        
        Dynamic_Array arr = new Dynamic_Array(capacity);
        
        System.out.println();
        System.out.print("Enter elements : ");
        for (int i=0 ; i < capacity; i++)
            arr.add(x.nextInt());
            
        arr.sort();
        
        System.out.println();
        System.out.print("Sorted Array : ");
        for (int i = 0; i < arr.size(); i++)
            System.out.print(arr.get(i) + " ");
        x.close();
    }
}