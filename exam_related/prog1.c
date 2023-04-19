/*Write a menu driven program to perform the following operations on an array.
(a) update an element x at position k in the array.
(b) insert an element x at position k in the array.
(c) search an element x from the array.
(d) remove an element x from the array.
(e) display an element x from the array.*/

#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void update(int arr[], int n, int x, int k)
{
    int i;
    if (k > 0 && k < n)
    {
        for (i = 0; i < n; i++)
        {
            arr[k - 1] = x;
        }
    }
    else
    {
        printf("Invalid choice!!!\n");
    }
}
int insert(int arr[], int n, int x, int k)
{
    int i;
    if (k < 1 || k > n)
    {
        printf("Not possible!!!\n");
        return -1;
    }
    for (i = n; i >= k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = x;
    n = n + 1;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return n;
}
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 1;
            break;
        }
    }
    return 0;
}
void Remove(int arr[], int n, int x)
{
    int i, k;
    for (k = 0; k < n; k++)
    {
        if (arr[k] == x)
            break;
    }
    if (k < n)
    {
        printf("Deleted Array is--> ");
        for (i = k; i <= n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n = n - 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of the Array:\n");
    scanf("%d", &size);
    int arr[size];
    int i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    fflush(stdin);
    printf("\nEnter a to update\nEnter b to insert\nEnter c to search\nEnter d to remove\nEnter e to display\n");
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("\nEnter the element and position:\n");
        int element, position;
        scanf("%d %d", &element, &position);
        update(arr, size, element, position);
        display(arr, size);
        break;
    case 'b':
        printf("\nEnter the element and position: \n");
        int e, p;
        scanf("%d %d", &e, &p);
        insert(arr, size, e, p);
        break;
    case 'c':
        printf("\nEnter the element: \n");
        int e1;
        scanf("%d", &e1);
        int s = search(arr, size, e1);
        if (s == 1)
        {
            printf("Element %d is present in the array\n", e1);
        }
        else
        {
            printf("Element %d is not present in the array\n", e1);
        }
        break;
    case 'd':
        printf("\nEnter the element: \n");
        int e2;
        scanf("%d", &e2);
        Remove(arr, size, e2);
        break;
    case 'e':
        display(arr, size);
        break;
    default:
        printf("Invalid Input!!!");
        break;
    }
    return 0;
}