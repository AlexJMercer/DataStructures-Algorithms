#include <iostream>

struct Node
{
    int data;
    Node *next;
}*front, *rear, *temp, *ptr;

Node *new_Node(int data)
{
    ptr = new Node;
    ptr->data = data;
    ptr->next = nullptr;
    return ptr;
}

bool isEmpty()
{
    return front == nullptr;
}

void enqueue(int data)
{
    temp = new_Node(data);
    if (isEmpty())
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty !";
        return;
    }

    temp = front;
    front = front->next;

    if (front == nullptr)
        front = rear = nullptr;
    
    delete(temp);
}

void disp()
{
    if (isEmpty())
        std::cout << "Queue is Empty !!";
    else
    {
        temp = front;
        std::cout << "\nQueue from front to rear is..." << std::endl;
        while (temp != nullptr)
        {
            if (temp->next != nullptr)
                std::cout << temp->data << ", ";
            else
                std::cout << temp->data;
            temp = temp->next;
        }
    }
    std::cout << std::endl;
}

int main()
{
    int choice, data;
    char ch = 'N';
    std::cout << "\nDemonstration of Queue using an Array";
    std::cout << "\n_________________________________________\n\n";
    while (ch == 'N')
    {
        std::cout << "\n1. Enqueue Operation";
        std::cout << "\n2. Dequeue Operation";
        std::cout << "\n3. Display Queue";
        std::cout << "\n4. Exit";
        std::cout << "\n\nEnter your choice : ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "\nEnter data to be entered : ";
            std::cin >> data;
            enqueue(data);
            break;
        
        case 2:
            std::cout << "\nDeleting first element in Queue...\n";
            dequeue();
            break;
        
        case 3:
            disp();
            break;
        
        case 4:
            std::cout << "\nDo you want to exit the program ? (Y/N) ";
            std::cin >> ch;
            break;

        default:
            std::cout << "\nInvalid Input. Try Again.";
            break;
        }
    }
    return 0;
}