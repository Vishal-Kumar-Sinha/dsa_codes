#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
void isFull()
{
    if (top == MAX - 1)
    {
        printf("The stack is Full\n");
    }
    else
    {
        printf("The stack is not full\n");
    }
}
void isEmpty()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d ", stack[top]);
    }
}
void push(int x)
{

    if (top == MAX - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d \n", item);
    }
}

void display()
{
    int i;
    if (top >= 0)
    {
        printf("STACK :");
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
    else
    {
        printf("The STACK is empty\n");
    }
}
void main()
{

    int ch;
    system("cls");

    do
    {
        int n;

        printf("Enter choice: 1:isFull 2:isEmpty 3:peek 4:push 5:pop 6:display 0.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isFull();
            break;
        case 2:
            isEmpty();
            break;
        case 3:
            peek();
            break;
        case 4:
        {
            int x;
            printf("Enter data: ");
            scanf("%d", &x);
            push(x);
        }
        break;
        case 5:
            pop();
            break;
        case 6:
            display();
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (ch != 0);
}
