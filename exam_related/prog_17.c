#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct record
{
    int value;
    struct record *next;
}QUEUENODE;

QUEUENODE *front=NULL,*rear=NULL;

int isEmpty()
{
    if(front==NULL)
        return 1;
    else
        return 0;
}

void push(int val)
{
	QUEUENODE *temp;
	temp=(QUEUENODE*)malloc(sizeof(QUEUENODE));
    temp->value=val;
    temp->next=NULL;
    if(rear==NULL)
    {
        front=temp;
    	rear=temp;
    }
    else
    {
    	rear->next=temp;
    	rear=rear->next;
	}
}

int pop()
{
    int val;
	QUEUENODE *temp;
    if(isEmpty())
    {
        printf("\nQueue Underflow.");
        return INT_MIN;
    }
    val=front->value;
    temp=front;
    if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
        front=front->next;
    free(temp);
    
    return val;
}

void display()
{
	QUEUENODE *temp;
    if(isEmpty())
        printf("Queue Underflow.\n");
    else
    {
    	temp=front;
		while(temp!=NULL)
        {
            printf("%d ",temp->value);
            temp=temp->next;
        }
        printf("\n");
    }
}

int main()
{
	int val,choice,x;
    do
    {
        printf("1. Push 2.Pop 3.isEmpty 4.Display 0.Exit \n");
    	
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: exit(0);
            case 1: printf("Enter the value to insert: ");
	                scanf("%d",&val);
                    push(val);
	                
                    break;
            case 2: x=pop();
                    if(x!=INT_MIN)
                        printf("Deleted data: %d\n",x);
                    break;
            case 3: if(isEmpty())
                        printf("!!! Queue is Empty !!!");
                    else
                        printf("Elements are present in queue...");
                    break;
            case 4: printf("Current queue : ");
                    display();
                    break;
            default: printf("\nPlease enter correct choice...\n");
        }
    }while(choice!=0);
    return 0;
}