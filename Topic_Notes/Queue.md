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
>
> &nbsp;
> #### **Enqueue (Insertion) :**
> Queue is stored in memory using a Array with **N**  elements.
> 
> With every insertion, the value of ``rear`` is incremented by 1.
>
> So, after **N** insertions, the ``rear`` element occupies index [N-1].
>
>> ``rear++;``\
>> ``queue[rear] = data;``
>
> &nbsp;
> #### **Dequeue (Deletion) :**
> In case of when the ``front`` and ``rear`` indexes are the same, it means that the array contains only one element.\
In which case, ``front`` and ``rear`` are both assigned -1, after deleting the last element.
>
>> ``temp = queue[front];``\
>> ``front = rear = -1;``
>
> Under normal circumstances, the front index is just incremented by 1, and the ``front`` element, which is held by a ``temp`` variable, is returned.
>> ``temp = queue[front];``\
>> ``front++;``
>
> Time Complexity for Enqueue Operation is ``O(1)``.
>
> Time Complexity for Dequeue Operation is ``O(n)``.

&nbsp;
### **Queue using Linked Lists :**
> Queues declared using Linked Lists can be of any size, i.e, they are dynamic.
>
> Two pointers, ``front`` & ``rear`` are kept track of while operating within the List.
>
> &nbsp;
> #### **Enqueue (Insertion) :**
> Firstly, create a new node object using the data given by the user, and store in a ``temp`` variable.
> 
> In case the List is Empty, assign ``front``, ``rear`` & ``temp`` (the new node), as the same.\
Then the List only contains a single element / node.
>>  ``front = rear = temp;``
>
> If not, ``temp`` is made to be the node after ``rear``, and ``temp`` is now assigned ``rear``.
>> ``rear->next = temp;``\
>> ``rear = temp;``
>
> &nbsp;
> #### **Dequeue (Deletion) :**
> During a dequeue operation, the ``front`` node is to be removed.
>
> ``front`` is incremented to its next pointer.
>
> If in case, the next pointer is a null pointer, ``rear`` is also made to be equal to ``front``, so, a null pointer.
>
> The ``temp`` node is then deleted.
>
>> ``temp = front;``\
>> ``front = front->next;``\
>> ``if (front == nullptr)``\
>> ``     front = rear = nullptr;``\
>> ``delete(temp);``
>
> &nbsp;
> Here, Time Complexity for both Enqueue and Dequeue operations are ``O(1)``.