/*Write a menu driven program in C or C++ to perform the following operations on
double linked list.
(a) insert a node at the beginning of the list.
(b) insert a node at the end of the list.
(c) deletet a node from the beginning of the list.
(d) delete a node at the end of the list.
(e) display the whole list.*/

// Double linked list opeartions
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head = NULL; // initializing head to NULL

void addBeg(int item)
{
    // creating a current memory location
    struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
    curr->data = item; // store the item in the data part of current
    curr->prev = NULL; // store NULL in the prev part of current
    curr->next = head; // store the address of next node in the next part of current
    if (head != NULL)
    { // if it is not a empty list
        head->prev = curr;
    }
    head = curr; // make curr as head
}

void addEnd(int item)
{
    // creating a current memory location
    struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
    curr->data = item; // store the item in the data part of current
    curr->next = NULL; // store NULL in the next part of current
    if (head == NULL)
    {
        curr->prev = NULL; // store NULL in the prev part of current
        head = curr;       // if head is NULL make curr as head
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = curr;
    curr->prev = temp;
}

void deleteBeg()
{
    // if the list is empty
    if (head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    struct Node *temp = head;
    printf("Deleted item is %d\n", temp->data);
    head = head->next; // update head to the next node
    head->prev = NULL; // make prev part of head=NULL
    free(temp);        // free the deleted memory
}

void deleteEnd()
{
    // if the list is empty
    if (head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    // if there is a single node in the list
    if (head->next == NULL)
    {
        struct Node *temp = head;
        head = head->next; // update head to the next node
        printf("Deleted item is %d\n", temp->data);
        free(temp); // free the deleted memory
        return;
    }
    struct Node *temp = head;  // initialize two pointer and make temp=head
    while (temp->next != NULL) // traverse the list untill add=NULL
    {
        temp = temp->next; // update temp to next node
    }
    temp->prev->next = NULL;
    printf("Deleted item is %d\n", temp->data);
    free(temp); // free the deleted memory
}

void display()
{
    struct Node *temp = head;
    // if the list is empty
    if (temp == NULL)
    {
        printf("List is empty!!\n");
        return;
    }
    while (temp != NULL) // traverse the list while temp !=NULL
    {
        printf("%3d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int t, p, q, s;
    while (1)
    {
        printf("\n");
        printf("Enter 1 to insert at begining\n");
        printf("Enter 2 to insert at end\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to delete from begining\n");
        printf("Enter 5 to delete from end\n");
        printf("Enter 6 to exit\n");
        printf("\n");
        printf("Enter your choice--> ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            printf("Enter the item-->");
            scanf("%d", &p);
            addBeg(p);
            break;
        case 2:
            printf("Enter the item-->");
            scanf("%d", &q);
            addEnd(q);
            break;
        case 3:
            display();
            break;
        case 4:
            deleteBeg();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
            exit(0);
        }
    }

    return 0;
}