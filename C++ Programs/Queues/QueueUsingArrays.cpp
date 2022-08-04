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

void insert(int data)
{
    if (isFull())
        std::cout << "Stack is Full !" << std::endl;
    else if (isEmpty())
    {
        std::cout << "Stack is Empty !" << std::endl;
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
        std::cout << "Queue is Empty !" << std::endl;
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
        std::cout << "\nQueue is empty !" << std::endl;
        return;
    }
    std::cout << "\nQueue from front to rear is..." << std::endl;
    for (int i = front; i <= rear; i++)
    {
        std::cout << queue[i] << ", ";
    }
}

int main()
{
    int choice, data;
    char ch = 'N';
    std::cout << "\nDemonstration of Queue using an Array";
    std::cout << "\n_________________________________________\n\n";
    while (ch == 'N')
    {
        std::cout << "\n1. Enter new Element";
        std::cout << "\n2. Delete Display Element";
        std::cout << "\n3. Display entire Queue";
        std::cout << "\n4. Exit";
        std::cout << "\n\nEnter your choice : ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "\nEnter data to be entered : ";
            std::cin >> data;
            insert(data);
            break;
        
        case 2:
            std::cout << "\nDeleting first element in Queue...\n";
            std::cout << remove();
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