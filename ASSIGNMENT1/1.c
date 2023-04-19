/*C program to take n elements from user
and display the sum elements using pointer.*/
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    int *ptr;
    printf("Enter no. of elements in the array :: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the %d elements :: ",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    ptr=a;
    for(i=0;i<n;i++) 
    {
        sum+=*ptr;
        ptr++;
    }
    printf("\nSum of the array elements is :: %d",sum);
    return 0;
}
