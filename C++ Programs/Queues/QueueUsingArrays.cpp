#include <iostream>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

bool isEmpty()
{
    return rear == -1;
}

bool isFull()
{
    return rear == (MAX - 1);
} 

int insert(int data)
{
    if (isFull())
        return -1;
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

int remove()
{
    int temp;
    if (isEmpty())
        return -1;
    else if (front == rear)
    {
        temp = queue[front];
        front = rear = -1;
    }
    else
    {
        temp = queue[front];
        front++;
    }
    return temp;
}

void disp()
{
    if (isEmpty())
    {
        std::cout << "\nQueue is empty !";
        return;
    }
    std::cout << "\nQueue from front to rear is..." << std::endl;
    for (int i = front; i < rear; i++)
    {
        std::cout << queue[i] << ", ";
    }
}

int main()
{

    return 0;
}