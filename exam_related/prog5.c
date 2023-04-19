#include <stdio.h>
#define MAX 5
void isFull();
void isEmpty();
void insert(int x);
void delet();
void display();
int queue[MAX];
int front = -1;
int rear = -1;
void main()
{
    int ch;
    do
    {
        
        printf("Enter choice: 1:isFull 2:isEmpty 3:insert  4:delete 5:display 0.Exit\n");
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
        {
            int x;
            printf("Enter data: ");
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
    // getche();
}
void isFull()
{
    if (((rear + 1) % MAX) == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Queue is not full\n");
    }
}
void isEmpty()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue is not empty\n");
    }
}
void insert(int x)
{

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % MAX) == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = (rear + 1) % MAX;
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
        front = (front + 1) % MAX;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else
    {
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d ", queue[rear]);
        printf("\n");
    }
}
