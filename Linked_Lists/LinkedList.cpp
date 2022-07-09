#include<iostream>

struct Node
{
    int data;
    Node *next;
} *start, *newptr, *curr, *ptr;

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
        curr = start;
        start = p;
        p->next = curr;
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