/*Write a program to sort a given array using radix sort algorithm.*/
/* Radix Sort */
#include <stdio.h>

int p = 1;
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

void countSort(int arr[], int n, int p)
{
    //counting the numbers of elemnts of array
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int digit = (arr[i] / p) % 10;
        count[digit]++;
    }

    //relative address
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i - 1] + count[i];
    }

    //output array
    int output[n];
    for (int i = (n - 1); i >= 0; i--)
    {
        int digit = (arr[i] / p) % 10;
        int index = count[digit] - 1;
        count[digit]--;
        output[index] = arr[i];
    }

    //copy output to innut
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void RadixSort(int arr[], int n)
{
    //max number of array
    int max = getMax(arr, n);
    while (max > 0)
    {
        countSort(arr, n, p);
        p = p * 10;
        max = max / 10;
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

    RadixSort(arr, n);
    printf("\n\nThe array after sorting--->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}