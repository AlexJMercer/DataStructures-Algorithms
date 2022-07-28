#include <iostream>

struct Node
{
    int data;
    Node *next;
}*top = nullptr, *ptr, *temp;

Node *create_new_node(int data)
{
    ptr = new Node;
    ptr->data = data;
    ptr->next = nullptr;
    return ptr;
}

bool isEmpty()
{
    return top == nullptr;
}

void push(Node *node)
{
    if (isEmpty())
        top = node;
    else
    {
        temp = top;
        top = node;
        node->next = temp;
    }
}

void pop()
{
    if (isEmpty())
        std::cout << "Stack Underflow !!";
    else
    {
        temp = top;
        top = top->next;
        std::cout << temp->data;
        delete temp;
    }
}

void disp()
{
    if (isEmpty())
        std::cout << "Stack is Empty !";
    else
    {
        temp = top;
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
    std::cout << "\nDemonstration of Stack using an Array";
    std::cout << "\n_________________________________________\n\n";
    while (ch == 'N')
    {
        std::cout << "\n1. Push new Element";
        std::cout << "\n2. Pop and Display Element";
        std::cout << "\n3. Display all Elements";
        std::cout << "\n4. Exit";
        std::cout << "\n\nEnter your choice : ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "\nEnter data to be pushed : ";
            std::cin >> data;
            push(create_new_node(data));
            break;
        
        case 2:
            std::cout << "\nPopping the top element... \n";
            pop();
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