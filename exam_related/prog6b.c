/*Write a program to sort a given array using selection sort algorithm.*/
/* Selection Sort */
#include <stdio.h>
void swap(int arr[], int i, int minIndex)
{
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}

void selectionsort(int arr[], int n)
{
    int i,j,k,m = 1;
    for (i = 0; i <= n-1; i++)
    {
        int minIndex = i;
        for (j = i + 1; j <= n-1; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr, i, minIndex);
        }
        printf("Pass %d is: ", m);
        for (k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
        m++;
    }
    printf("\nSorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n,i;
    printf("Enter n of array: ");
    scanf("%d", &n);
    int arr[10];
    printf("Enter elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    selectionsort(arr, n);
    return 0;
}