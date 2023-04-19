#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void isFull();
void isEmpty();
void insert(int x);
void delet();
void display();
int queue[MAX];
int front = -1;
int rear = -1;
int main()
{
    int ch;
    do
    {
        
        printf("Enter choice:  1:isFull 2:isEmpty 3:insert 4:delete 5:display 0.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isFull();
            break;
        case 2:
            isEmpty();
            break;
        case 3: {
            int x;
            printf("Enter data:");
            scanf("%d", &x);
            insert(x);
            break;
        }
        case 4:
            delet();
            break;
        case 5:
            display();
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (ch != 0);
    return 0;
}
void isFull()
{
    if (rear == MAX - 1)
    {
        printf("the queue is full\n");
    }
    else
    {
        printf("the queue is not full\n");
    }
}
void isEmpty()
{
    if (front == -1 && rear == -1)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the queue is not empty\n");
    }
}
void insert(int x)
{

    if (rear == MAX - 1)
    {
        printf("overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void delet()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d \n", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue is: \n");
        for (i = front; i < rear + 1; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
