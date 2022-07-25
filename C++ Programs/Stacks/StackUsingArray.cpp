#include <iostream>
#define max 5

int stack_arr[max];
int top = -1;

void push(int data)
{
    if (top == max-1)
    {
        std::cout << "Stack Overflow";
        return;
    }
    ++top;
    stack_arr[top] = data;
}

int pop()
{
    --top;
    
}

void disp()
{
    for (int i = 0; i < max; i++)
    {
        if (i != max)
            std::cout << stack_arr[i] << ", ";
        else
            std::cout << stack_arr[i];
    }
}

int main()
{  
    int x;
    push(1);
    push(5);
    push(8);
    push(9);
    push(12);
    disp();
    x = pop();
    return 0;
}