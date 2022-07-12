#include<iostream>

struct Node
{
    int data;
    Node *next;
} *head, *newptr, *save, *ptr, *rear;

Node *new_node(int n)
{
    ptr = new Node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

void insert_beg(Node *p)
{
    if (head == NULL)
        head = p;
    else
    {
        save = head;
        head = p;
        p->next = save;
    }
}

void insert_end(Node *p)
{
    if (head == NULL)
        head = rear = p;
    else
    {
        rear->next = p;
        rear = p;
    }
}

void delete_head()
{
    if (head == NULL)
        std::cout << "Underflow\n";
    else
    {
        ptr = head;
        head = head->next;
        delete ptr;
    }
}

void delete_pos(Node *head, int pos)
{
    Node *temp = head;
    if (head == NULL)
    {
        std::cout << "Underflow";
        return;
    }
    if (pos == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 2; temp != NULL && i < (pos-1); i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
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