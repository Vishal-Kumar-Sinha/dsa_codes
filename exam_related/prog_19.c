/*Write a menu driven program in C or C++ to perform the following operations on
circular linked list.
(a) insert a node at the beginning of the list.
(b) insert a node at the end of the list.
(c) deletet a node from the beginning of the list.
(d) delete a node at the end of the list.
(e) display the whole list.*/

// Circular linked list operations
#include <stdio.h>
#include <stdlib.h>

// creating node
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL; // initializing head to NULL

void traverse()
{
    struct Node *temp = head; // initialize a pointer to head
    // if the list is empty
    if (head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    do
    {
        printf("%3d\t", temp->data);
        temp = temp->next;
    } while (temp != head); // traverse the list till the last node
}

void insertFirst(int item)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // if the list is initially empty
    if (head == NULL)
    {
        ptr->data = item;
        ptr->next = ptr;
        head = ptr;
    }
    ptr->data = item;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p points to the last node
    p->next = ptr;
    ptr->next = head;
    head = ptr;
}

void insertLast(int item)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // if the list is initially empty
    if (head == NULL)
    {
        ptr->data = item;
        ptr->next = ptr;
        head = ptr;
        // return head;
    }
    ptr->data = item;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p points to the last node
    p->next = ptr;
    ptr->next = head;
}

void deleteFirst()
{
    // if the list is initially empty
    if (head == NULL)
    {
        printf("List is empty!!!\n");
    }
    // if the list has a single node
    else if (head->next == head)
    {
        printf("Deleted item is %d\n", head->data);
        head = NULL;
        free(head);
    }
    // if the list has more then one node
    else
    {
        struct Node *p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        printf("Deleted item is %d\n", head->data);
        p->next = head->next;

        free(head);
        head = p->next;
    }
}

void deleteLast()
{
    struct Node *ptr, *p;
    // if the list is initially empty
    if (head == NULL)
    {
        printf("List is empty!!!\n");
    }
    // if the list has a single node
    else if (head->next == head)
    {
        printf("Deleted item is %d\n", head->data);
        head = NULL;
        free(head);
    }
    // if the list has a more than one node
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        // at this point p points to the last node and ptr points to the second last
        p->next = ptr->next;
        printf("Deleted item is %d\n", ptr->data);
        free(ptr);
    }
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
        printf("Enter 4 to delete from first\n");
        printf("Enter 5 to delete from last\n");
        printf("Enter 6 to exit\n");
        printf("\n");
        printf("Enter your choice--> ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            printf("Enter the item-->");
            scanf("%d", &p);
            insertFirst(p);
            break;
        case 2:
            printf("Enter the item-->");
            scanf("%d", &q);
            insertLast(q);
            break;
        case 3:
            traverse();
            break;
        case 4:
            deleteFirst();
            break;
        case 5:
            deleteLast();
            break;
        case 6:
            exit(0);
        }
    }

    return 0;
}