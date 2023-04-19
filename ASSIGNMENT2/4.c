#include<stdio.h>//selection sort
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%3d",arr[i]);
}
void ss(int arr[],int n)
{
    int i,j,c; 
    for(i=0;i<n-1;i++)
    { 
        c=i;
        for(j=i+1;j<n;j++)
          if (arr[j]<arr[c])
            c=j;
        swap(&arr[c],&arr[i]);
        printf("\nArray after %d pass :: ",i+1);
        printArray(arr,n);
    }
}
int main()
{
	int n,i,j,temp,k;
	printf("Enter the number of elements :: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the %d elements :: ");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	ss(ar,n);
	printf("\nSorted Array :: ");
	printArray(ar,n);
	return 0;
}
