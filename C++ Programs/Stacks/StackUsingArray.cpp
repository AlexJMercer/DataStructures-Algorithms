#include <iostream>
#define max 5

int stack_arr[max];
int top = -1;

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top == (max - 1);
}

void push(int data)
{
    if (isFull())
    {
        std::cout << "Stack Overflow";
        return;
    }
    ++top;
    stack_arr[top] = data;
}

void pop()
{
    if (isEmpty())
    {
        std::cout << "Stack Underflow !!";
        return;
    }
    std::cout << stack_arr[top];
    top--;
}

void disp()
{
    if (isEmpty())
    {
        std::cout << "Stack Underflow !!";
        return;
    }
    std::cout << "\nCurrent Stack :" << std::endl;
    for (int i = top; i >= 0; i--)
    {   
        if (i != 0)
            std::cout << stack_arr[i] << ", ";
        else
            std::cout << stack_arr[i];
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
            push(data);
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