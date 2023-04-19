/*Write a menu driven program in C or C++ to implement a stack using single linked
list and perform the following operations.
(a) isEmpty() is to check whether the stack is empty or not.
(b) push() is to insert an item in the stack.
(c) pop() is to delete an item from the stack.
(d) display() is to show the entire stack.*/

// Stack using list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int item)
{
    struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
    if (curr == NULL)
    {
        printf("The item can't be inserted");
    }
    else
    {
        if (top == NULL)
        {
            curr->data = item;
            curr->next = NULL;
            top = curr;
        }
        else
        {
            curr->data = item;
            curr->next = top;
            top = curr;
        }
        printf("%d is successfully inserted in the list", item);
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    if (top->next == NULL)
    {
        printf("Deleted item is %d\n", top->data);
        free(top);
        top = NULL;
        return;
    }
    struct Node *temp = top;
    top = top->next;
    printf("Deleted item is %d\n", temp->data);
    free(temp);
}

void display()
{
    struct Node *temp = top;
    // if the list is empty
    if (temp == NULL)
    {
        printf("List is empty!!\n");
        return;
    }
    while (temp != NULL) 
    {
        printf("%3d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int t, p;
    while (1)
    {
        printf("\n");
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to exit\n");
        printf("\n");
        printf("Enter your choice--> ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            printf("Enter the item-->");
            scanf("%d", &p);
            push(p);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}