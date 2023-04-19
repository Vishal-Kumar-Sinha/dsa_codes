/*Write a menu driven program in C or C++ to perform the following operations on
single linked list.
(a) insert a node at the beginning of the list.
(b) insert a node at the end of the list.
(c) display the whole list.
(d) search an element x in the list.*/

// linked list operations
#include <stdio.h>
#include <stdlib.h>

// creating node
struct Node
{
  int data;
  struct Node *next;
};
struct Node *head = NULL; // initializing head to NULL

void addBeg(int item)
{
  // creating a current memory location
  struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
  curr->data = item; // store the item in the data part of current
  curr->next = head; // store the address of next node in the next part of current
  head = curr;     // make curr as head
}

void addEnd(int item)
{
  // creating a current memory location
  struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
  curr->data = item; // store the item in the data part of current
  curr->next = NULL; // store NULL in the next part of current
  if (head == NULL)
  {
    head = curr; // if head is NULL make curr as head
    return;
  }
  struct Node *temp = head;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = curr;
}

void display()
{
  struct Node *temp = head;
  // if the list is empty
  if (temp == NULL)
  {
    printf("List is empty!!n\n");
    return;
  }
  while (temp != NULL) // traverse the list while temp !=NULL
  {
    printf("%3d\t", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void search(int item)
{
  struct Node *temp = head;
  int flag = 1, i = 0;
  if (temp == NULL)
  {
    printf("List is empty!!\n");
    return;
  }
  while (temp != NULL) // traverse the list while temp !=NULL
  {
    if (temp->data == item) // if item is found then return position
    {
      printf("%d is present at %d\n", item, i);
      flag = 0;
      break;
    }
    temp = temp->next;
    i++; // increment position
  }
  // if element is not found i the list
  if (flag == 1)
    printf("%d is not present in the list!!\n", item);
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
    printf("Enter 4 to search\n");
    printf("Enter 5 to exit\n");
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
      printf("Enter the item to searach-->");
      scanf("%d", &s);
      search(s);
      break;
    case 5:
      exit(0);
    }
  }

  return 0;
}