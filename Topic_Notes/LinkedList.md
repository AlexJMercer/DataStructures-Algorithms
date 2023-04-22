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
## **Types of Linked Lists :**
<hr>

### **1. Singly Linked Lists :**
> 
> **Singly Linked Lists** are the simplest form of Linked Lists. 
> 
> They are made up of nodes, each node containing data and a reference to the next node in the list.
> 
> The last node in the list has a reference to NULL.
> 
> ![singlylinkedlist](https://media.geeksforgeeks.org/wp-content/uploads/20220816144425/LLdrawio.png)
> 
> **Advantages :**
> - Insertion and Deletion are easy.
> - Dynamic in size.
> - No need to specify the size of the list.
> - No need to shift the elements when inserting or deleting.
> 
> **Disadvantages :**
> - Takes up more space as each node contains a reference to the next node.
> - Cannot be traversed in reverse.
> - Cannot be accessed randomly.
> - No cache locality.

&nbsp;

### **2. Doubly Linked Lists :**
> 
> **Doubly Linked Lists** are a variation of Singly Linked Lists.
> 
> They are made up of nodes, each node containing data and a reference to the next node in the list, as well as the previous node in the list.
> 
> The last node in the list has a reference to NULL.
> 
> ![doublylinkedlist](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png)
>
> 
> **Advantages :**
> - Insertion and Deletion are easy.
> - Dynamic in size.
> - No need to specify the size of the list.
> - No need to shift the elements when inserting or deleting.
> - Can be traversed in both directions.
> 
> **Disadvantages :**
> - Takes up more space as each node contains a reference to the next node and the previous node.
> - Cannot be accessed randomly.
> - No cache locality.


&nbsp;
## **Time Complexities of Linked Lists:**
> - **Insertion :** 
>     - **At the beginning :** 
>         - **Time Complexity :** O(1)
>         - **Space Complexity :** O(1)
>     - **At the end :**
>         - **Time Complexity :** O(n)
>         - **Space Complexity :** O(1)
>     - **At a given position :**
>         - **Time Complexity :** O(n)
>         - **Space Complexity :** O(1)
> 
> - **Deletion :**
>     - **At the beginning :**
>         - **Time Complexity :** O(1)
>         - **Space Complexity :** O(1)
>     - **At the end :**
>         - **Time Complexity :** O(n)
>         - **Space Complexity :** O(1)
>     - **At a given position :**
>         - **Time Complexity :** O(n)
>         - **Space Complexity :** O(1)
> 
> - **Searching :**
>     - **Linear Search :**
>         - **Time Complexity :** O(n)
>         - **Space Complexity :** O(1)
>     - **Binary Search :**
>         - **Time Complexity :** O(log n)
>         - **Space Complexity :** O(1)