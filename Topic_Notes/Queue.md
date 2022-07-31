# Queue

### **Definition :**
> A Queue is a linear data structure which has a **FIFO** (First In First Out) or **LILO** (Last In Last Out) structure.
>
> Physically it can be implemented as an **Array** or a **Linked List**.
>

&nbsp;
### **Queue using Arrays :**
> When a queue is declared using an array, it has a fixed size.
>
> The beginning of the array is set as ``front`` end while the end of the arrays becomes the ``rear`` end.
>
> Number of elements in a queue at any given time can be calculated using :
>> ``front - rear + 1``
> #### **Insertion :**
> Queue is stored in memory using a Array with **N**  elements.
> 
> With every insertion, the value of ``rear`` is incremented by 1.
>
> So, after **N** insertions, the ``rear`` element occupies index [N-1].
>
> 

&nbsp;
### **Queue using Linked Lists :**
> 