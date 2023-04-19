#include<stdio.h>//linear queue
#include<stdlib.h>
#define n 50
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice :: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    if(rear==x)
                        printf("\n...Queue is Full...");
                    else
                    {
                        printf("\nEnter no %d :: ",j++);
                        scanf("%d",&queue[rear++]);
                    }
                    break;
            case 2:
                    if(front==rear)
                        printf("\n...Queue is empty...");
                    else
                    {
                        printf("\nDeleted Element is %d",queue[front++]);
                        x++;
                    }
                    break;
            case 3:
                    printf("\nQueue Elements are ::\n ");
                    if(front==rear)
                        printf("\n...Queue is Empty...");
                    else
                    {
                        for(i=front;i<rear;i++)
                        {
                            printf("%3d",queue[i]);
                            printf("\n");
                        }
                    break;
            case 4:
                    exit(0);
            default:
                    printf("\n...Wrong Choice...");
            }
        }
    }
    return 0;
}
