/*Write a program to sort a given array using count sort algorithm.*/
/* Count Sort */
#include <stdio.h>
#include <stdlib.h>

int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

void countSort(int arr[], int n)
{
    //max number of array
    int max = getMax(arr, n);

    //counting the numbers of elemnts of array
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }

    //relative address
    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i - 1] + count[i];
    }

    //output array
    int output[n];
    for (int j = (n - 1); j >= 0; j--)
    {
        int index = count[arr[j]] - 1;
        count[arr[j]] = count[arr[j]] - 1;
        output[index] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before sorting--->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    countSort(arr, n);
    printf("\n\nThe array after sorting--->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}