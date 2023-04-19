/*C program to perform push,pop,display operation for a stack(using array).*/
#include<stdio.h>
#define s 1000
int a=-1,stack[s];
void push()
{
    int x;
    if(a==s-1)
        printf("\n...Stack is full...\n");
    else
    {
        printf("\nEnter element to push :: ");
        scanf("%d",&x);
        a=a+1;
        stack[a]=x;
    }
}
void pop()
{
    if(a==-1)
        printf("\n...Stack is empty...\n");
    else
    {
        printf("\nDeleted element is :: %d",stack[a]);
        a=a-1;
    }
}
void display()
{
    int i;
    if(a==-1)
        printf("\n...Stack is empty...\n");
    else
    {
        printf("\nStack is :: \n");
        for(i=a;i>=0;--i)
            printf("%3d",stack[i]);
    }
}
int main()
{
    int ch;
    while(1) 
    {
        printf("\t*** -:Stack Operations:- ***");
        printf("\n\nEnter 1 for Push.\nEnter 2 for Pop.\nEnter 3 to Display.\nEnter 4 to Exit.");
        printf("\n\nEnter your choice(1-4) :: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(0);
            default: printf("\n...Wrong Choice...");
        }
    }
    return 0;
} 
