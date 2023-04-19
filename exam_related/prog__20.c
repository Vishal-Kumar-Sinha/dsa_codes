/*Write a menu driven program in C or C++ to perform the following operations on
Binary Search Tree.
(a) insert a node.
(b) inorder traversal.
(c) preorder traversal.
(d) postorder traversal.
(e) search an given key.*/

// Binary Search Tree
#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    struct TreeNode *lchild;
    int data;
    struct TreeNode *rchild;
};
struct TreeNode *root = NULL; // initializing root to NULL

void insert(int item)
{
    // creating a current memory location
    struct TreeNode *curr = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    curr->lchild = NULL; // store NULL in the left part of current
    curr->data = item;   // store item in the data part of current
    curr->rchild = NULL; // store NULL in the left part of current
    if (root == NULL)    // if the tree is empty initially
    {
        root = curr;
        return;
    }
    struct TreeNode *temp = root, *parent;
    // traverese the tree while root != NULL
    while (temp != NULL)
    {
        parent = temp;
        // search the parent element of the inserting element
        if (item > temp->data)
        {
            temp = temp->rchild;
        }
        else
        {
            temp = temp->lchild;
        }
    }
    // check if the element is greater or laser than parent element
    if (item > parent->data)
    {
        parent->rchild = curr; // if greater then store in right subtree
    }
    else
    {
        parent->lchild = curr; // if lesser then store in left subtree
    }
}

void search(int item)
{
    int i = 0,flag=1;
    if (root == NULL) // if the tree is empty
    {
        printf("Empty Tree!!!\n");
        return;
    }
    struct TreeNode *temp = root;
    // traverese the tree while root != NULL
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            printf("Element %d is present at position %d\n", item, i);
            flag = 0;
            break;
        }
        // if item<root search the right subtree of root
        else if (item < temp->data)
        {
            temp = temp->lchild;
        }
        // if item>root search the left subtree of root
        else
        {
            temp = temp->rchild;
        }
        i++;
    }
    if(flag==1){
        printf("Element %d is not present in the tree!!!\n", item);
    }
}
// inorder display (left,root,right)
void printInorder(struct TreeNode *ptr)
{
    if (ptr == NULL)
        return;

    printInorder(ptr->lchild);
    printf("%4d", ptr->data);
    printInorder(ptr->rchild);
}
// preorder display (root,left,right)
void printPreorder(struct TreeNode *ptr)
{
    if (ptr == NULL)
        return;

    printf("%4d", ptr->data);
    printPreorder(ptr->lchild);
    printPreorder(ptr->rchild);
}
// postorder display (left,right,root)
void printPostorder(struct TreeNode *ptr)
{
    if (ptr == NULL)
        return;

    printPostorder(ptr->lchild);
    printPostorder(ptr->rchild);
    printf("%4d", ptr->data);
}

int main()
{
    int t, p, q, s;
    while (1)
    {
        printf("\n");
        printf("Enter 1 to insert\n");
        printf("Enter 2 to search an item\n");
        printf("Enter 3 to display inorder\n");
        printf("Enter 4 to display preorder\n");
        printf("Enter 5 to display postorder\n");
        printf("Enter 6 to exit\n");
        printf("\n");
        printf("Enter your choice--> ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:

            printf("Enter the item-->");
            scanf("%d", &p);
            insert(p);
            break;
        case 2:
            printf("Enter the item you want to search-->");
            scanf("%d", &q);
            search(q);
            break;
        case 3:
            printInorder(root);
            break;
        case 4:
            printPreorder(root);
            break;
        case 5:
            printPostorder(root);
            break;
        case 6:
            exit(0);
        }
    }

    return 0;
}