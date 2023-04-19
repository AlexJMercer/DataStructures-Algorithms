# Linked Lists

### **Definition :**
> A **Linked List** is a set of **nodes** that are related/linked to each other through **references**.
>
> Each single node in a Linked List contains data for that node, and the reference/pointer to the node that comes after it. 

![linkedlist_image](https://media.geeksforgeeks.org/wp-content/uploads/20220816144425/LLdrawio.png)

> To imagine a Linked List, picture the coaches of a train.
>
> ![train](https://www.progressiverailroading.com/resources/editorial/2018/a55035-Canadian-Pacific.jpg)
>
> They all start at the Engine (Head), connected to each other one after the other (nodes),
and terminate at the last coach where a big ‘X’ marks the end at the back (Tail).

&nbsp;
#### **Initialization :**
> In C++ and Java, we create a Node class, which is the building block of a Linked List.
> 
> 
>
> In C++, a Node struct looks like : <br>
> ```
> struct Node
> {
>     int data;
>     Node *next;
> }
> ```
> 
> Meanwhile in Java, it looks like : <br>
>```
>class Node {
>    public int data;
>    public Node next;
>
>    Node() {
>        this.data = Integer.MIN_VALUE;
>        this.next = null;
>    }
>
>    Node(int data) {
>        this.data = data;
>        this.next = null;
>    }
>}
>```
>
> The above ways for initialization were strictly for Singly Linked Lists.
>
> In case of Doubly Linked Lists, we have another pointer named `prev` which holds the address of the node that comes before it.
>
> Examples can be found in the folder C Programs/ C++ Programs/ Java Programs about different ways to initialize/handle and work with Linked Lists.

&nbsp;
### **Types of Linked Lists :**

1. ### **Singly Linked Lists :**
>  

2. ### **Doubly Linked Lists :**
> 

3. ### **Circular Linked Lists :**
> 
> - ### **Singly Circular Linked Lists :**
> 
> - ### **Doubly Circular Linked Lists :**
> 


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

