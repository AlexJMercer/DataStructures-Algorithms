# **Merge Sort :**

### **Overview :**
> - Merge Sort is a popular sorting algorithm based on the `Divide and Conquer` paradigm.
>
> - In this algorithm, a given array/list is broken up into multiple sub-arrays, sorted, and then merged back again into a final fully sorted array. 

### **How it Works :**
> - The `merge_sort()` recursively divides the given array into two halves until we are left with an array size of 1.
>
> - The `merge()` function then sorts the sub-arrays gradually to sort the entire array.
>
> ![Divide Algo](https://s3-us-west-2.amazonaws.com/tutorials-image/merge+sort+working.png)
>
> -  In the `merging` step, two sorted arrays are merged to form one single sorted array.
>
> ![Merging](https://linuxhint.com/wp-content/uploads/2021/12/Merge-Sort-Algorithm-Using-Python-1.png)


### **Performance :**
> - **Time Complexity** : The best, worst and average case scenario of an Insertion Sort algorithm is **O(n*log n)**. 
>
> - **Space Complexity** : Only a single variable `temp` is used for swap, hence space complexity is **O(n)**.

### **Advantages :**
> - Efficient sorting of an array in O(n*log n) time.
> - Can also be used with linked list without any time or space overheads.
> - Employed in external sorting.


### **Disadvantages :**
> - If the array is sorted, merge sort still iterates through the entire process.
> - For smaller datasets, it is slower than other sorting algorithms.
> - For a temporary array, merge sort requires an additional space of O(n).