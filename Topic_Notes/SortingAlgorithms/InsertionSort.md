# **Insertion Sort :**

### **How it Works :**
> The Insertion sort is a simple sorting algorithm, but it is usually not the most efficient.
> 
> To sort a list with _n_ elements, the insertion sort begins with the second element.
> 
> It compares the second element with the first element and inserts it before the first element if it does not exceed the first element, and inserts it after the first element if it exceeds the first element.
> 
> Now, the first two elements are in the correct order.
>
> The third element is then compared with the first element, and if it larger than the first element, it is compared with the second element, and it is inserted into the correct position among the first three elements.

&nbsp;
### **Performance :**
> - **Time Complexity** : The worst and average case scenario of an Insertion Sort algorithm is **O(n<sup>2</sup>)**. 
>
> - **Space Complexity** : It only needs a fixed amount of space for operations on the array, hence it has a space complexity of **O(1)**.

&nbsp;
### **Advantages of Insertion Sort :**
> - Requires little (constant) memory.
>
> - Best Time Complexity for Insertion Sort is **O(n)**.
>
> - There's only one iteration in the case, since the inner loop operation is trivial when the list is already in order.
>
> - This sorting method is preferred when working with a Linked List.

### **Disadvantages of Insertion Sort :**
> - It is not the most efficient algorithm for sorting lists with large data-sets.
>
> - Presence of turtles can significantly slow down the sorting process.

&nbsp;
![Insertion Sort](https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png)