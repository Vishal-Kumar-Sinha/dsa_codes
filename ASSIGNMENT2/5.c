#include<stdio.h> //insertion sort
void ins_s(int *a,int n)
{
    int i,key,j,k;
    for(i=1;i<n;i++) 
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
		{
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        printf("\nArray after Pass %d :: ",i);
        for(k=0;k<n;k++)
		    printf("%3d",a[k]); 
    }
}
int main()
{
	int n,i,j,k,temp;
	printf("Enter the number of elements :: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements :: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
    ins_s(arr,n);
    printf("\nArray after Sorting :: ");
    for(k=0;k<n;k++)
	printf("%3d",arr[k]);
}
