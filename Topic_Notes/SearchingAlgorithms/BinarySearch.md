# **Linear Search / Sequential Search**

> ### **General Searching Problem :**
> - Consider a list of elements _a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>_.
> - An element _x_ is to be determined whether or not it is in the list.
> - The solution to this search is the location of the term in the list that equals _x_.
> - In case _x_ is not in the list, the solution is 0.

## **How It Works :**
> - The algorithm proceeds by comparing the element to be located to the middle term of the list.
> - The list is split into two smaller sub-lists of equal size, where one of these smaller lists has fewer terms than the other.
> - This process is repeated until the middle term is equal to the element being searched for.
> - **NOTE** : This algorithm is used ONLY when the list elements are arranged in ascending order.

&nbsp;
![Binary Search](https://media.geeksforgeeks.org/wp-content/uploads/20220309171621/BinarySearch.png)