# Arrays

### **Definition :**
> An array is a group of similar elements or data items of the same type collected at contiguous memory locations.
>
> Basically, arrays are used to store multiple items of the same type, together.

![array_image](https://media.geeksforgeeks.org/wp-content/uploads/20220721080308/array.png)

> An array makes it easy to locate items by only adding an offset to the base/starting address. 

&nbsp;
#### **Initialization :**
> In most languages, we declare an array by first allocating some contiguous space in the memory.<br>
>
> In C Language, it's done by : <br>
`int *arr = (int*)malloc(size * sizeof(int));`
>
> `malloc` is a keyword used for **m**emory **alloc**ation. So, in the function, we tell the compiler to allocate `size` units of memory of type `int` and then store the memory address of the first index of the array.
>
> An array can also be initialized directly by using curly braces : <br>
`int arr[5] = { 1, 2, 3, 4, 5 }`
>
> Examples can be found in the folder C Programs/ C++ Programs/ Java Programs about different ways to initialize/handle and work with Arrays

&nbsp;
### **Types of Arrays :**

- ### **One - Dimensional Arrays :**
> A one-dimensional array is a linear array.
>
> It involves single sub-scripting, where square brackets `[]` are used to denote the subscript of the array and also for accessing elements from the array.
>
> **Syntax :** `DataType arrayName[size]` 

- ### **Multi - Dimensional Arrays :**
> A multi-dimensional array has multiple nested arrays.
>
> Here, we require the use of multiple tables to declare and/or access array elements.
>
> It involves multiple sub-scripting, where each square brackets `[]` are used to denote the subscript of the array and also for accessing elements from the array.
>
> For a 2 - Dimensional Array:
>
> **Syntax :** `DataType arrayName[row_size][column_size]`
>
> For a 3 - Dimensional Array:
>
> **Syntax :** `DataType arrayName[size1][size2][size3]`


&nbsp;
### **Advantages of Arrays :**
> - It is a better version of storing the data of the same size and same type.
>
> - It enables us to collect the number of elements in it.
>
> - Arrays have a safer cache positioning that improves performance.
>
> - When it comes to insertion and deletion, it is a bit difficult because the elements are stored sequentially and the shifting operation is expensive.

&nbsp;
### **Disadvantages of Arrays :**
> - In an array, it is essential to identify the number of elements to be stored.
>
> - It is a static structure. It means that in an array, the memory size is fixed.
>
> - When it comes to insertion and deletion, it is a bit difficult because the elements are stored sequentially and the shifting operation is expensive.

