# **Selection Sort :**

### **Overview :**
> Selection sort is a sorting algorithm that selects the smallest element in an unsorted list/array in  each iteration, and places that element at the beginning of that list/array.

### **How it Works :**
> - In an unsorted array, initialize the first element as `min`
>
> - Compare `min` with subsequent elements, and if they are smaller, assign them as `min`
>
> - After comparing till the last element, swap `min` with the element at the beginning of that iteration.
>
> - After each iteration completes, `min` is placed at the front of the unsorted array.


### **Performance :**
> - **Time Complexity** : The best, worst and average case scenario of an Insertion Sort algorithm is **O(n<sup>2</sup>)**. 
>
> - **Space Complexity** : Only a single variable `temp` is used for swap, hence space complexity is **O(1)**.

### **Working Diagram :**
![Selection Sort](https://files.codingninjas.in/capture2-6720.JPG)