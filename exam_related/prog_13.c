/*Write a program in C or C++ to sort a given array using quick sort algorithm.*/
/*Quick Sort*/

#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

int partition(int *array, int low, int high)
{
    int i,j,pivot;
    pivot=array[high];
    i=(low-1);
    for(j=low;j<=high-1;j++)
        if(array[j]<=pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    swap(&array[i+1],&array[high]);

    return (i+1);
}

void quickSort(int *array, int low, int high)
{
    int i;
    if(low<high)
    {
        i=partition(array,low,high);
        quickSort(array,low,i-1);
        quickSort(array,i+1,high);
    }
}

int main()
{
    int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter array elements\n");
	for(i=0;i<=n-1;i++)
	    scanf("%d",&arr[i]);
	printf("\nBefore sorting...");
	for(i=0;i<=n-1;i++)
	    printf("%d ",arr[i]);

    quickSort(arr,0,n-1);

	printf("\nAfter sorting (Ascending Order)...");
	for(i=0;i<=n-1;i++)
	    printf("%d ",arr[i]);
	printf("\nAfter sorting (Descending Order)...");
	for(i=n-1;i>=0;i--)
	    printf("%d ",arr[i]);

    return 0;
}