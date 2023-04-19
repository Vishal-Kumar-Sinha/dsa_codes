/*C program to swap two consecutive elements.(Except the
last element if total number of element is odd.)*/
#include<stdio.h>
int main()
{
    int i,temp,n;
    printf("Enter no. of elements in the array :: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements :: ",n);
    for(i=0;i<n;++i) 
        scanf("%d",&a[i]);
    i=0;
    while(i<n-1)
	{
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i+=2;
    }
    printf("Array list after swapping 2 consecutive elements:");
    for(i=0;i<n;++i) 
        printf("%4d",a[i]);
    return 0;
}
