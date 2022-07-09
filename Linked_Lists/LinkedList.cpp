#include<iostream>

struct Node
{
    int data;
    Node *next;
} *start, *newptr, *save, *ptr, *rear;

Node *new_node(int n)
{
    ptr = new Node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

void insert_beg(Node *p)
{
    if (start == NULL)
        start = p;
    else
    {
        save = start;
        start = p;
        p->next = save;
    }
}

void insert_end(Node *p)
{
    if (start == NULL)
        start = rear = p;
    else
    {
        rear->next = p;
        rear = p;
    }
}

void *delete_head()
{
    if (start == NULL)
        std::cout << "Underflow\n";
    else
    {
        ptr = start;
        start = start->next;
        delete ptr;
    }
}

void disp(Node *p)
{
    while (p != NULL)
    {
        std::cout << p->data << " -> ";
        p = p->next;
    }
    std::cout << " NULL\n"; 
}

int main()
{
    // Driver Code
}