# Stacks

### **Definition :**
> A stack is a linear data structure in which insertion and deletion functions are allowed only at the end, called the _top of the stack_.

> As a stack is a linear data structure, we can implement it using an **array** or  **linked list**.

&nbsp;
#### **Stack as an ADT :**
> When we define a stack as an _ADT_ (Abstract Data Type), then we are only interested in knowing the stack operations from the user point of view.

> This means we are not interested in knowing the implementation details at this moment. We are only interested in knowing what type of operations we can perform on the stack.

&nbsp;
### **Primary Stack Operations :**
>
> - **Push** : Inserts data into the stack.
>
> - **Pop** : Deletes the last inserted element from the stack.

&nbsp;
### **Secondary Stack Operations :**
> - **Top** : Returns last inserted element without removing it.
>
> - **Size** : Returns size of stack, or number of elements in the stack.
>
> - **isEmpty** : Returns TRUE or FALSE depending upon if the stack is empty or not.
>
> - **isFull** : Returns TRUE or FALSE depending upon if the stack is full.

&nbsp;
### **Array Implementation :**
> - For an ordinary array, _insertion_ and _deletion_ functions can be performed at any place but we want the array to behave like a stack.
>
> - Hence, _insertion_ and _deletion_ functions are performed ONLY at the end.
>
> - For this, we keep track of a variable ``top`` which is the last inserted element, or the topmost element in the array.
>
> - For empty stack, ``top`` is -1.
>
> &nbsp;
> #### **Push Function :**
> - ``top`` is incremented by 1.
>
> - New element is pushed at the position ``top``.
>
> #### **Pop Function :**
>
> - Element at position of ``top`` is deleted.
>
> - ``top`` is decremented by 1.