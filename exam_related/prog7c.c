#include <stdio.h>
int binarySearch(int a[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = (left + right)/2;   
        if (x == a[mid]) 
            return mid;
        else if (x < a[mid]) 
            right = mid - 1;
        else 
            left = mid + 1;
    }
    return -1;
}
int main()
{
int i, n, x, a[25];
printf("Enter number of elements : ");
scanf("%d",&n);
printf("\nEnter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int l = sizeof(a)/sizeof(a[0]);
printf("\nEnter the number to be searched:");
scanf("%d", &x);
int left = 0, right = n - 1;
    int index = binarySearch(a, left, right, x);
    if (index != -1) 
        printf("Element found at index %d", index);
    else 
        printf("Element not found in the array");
    return 0;
}
