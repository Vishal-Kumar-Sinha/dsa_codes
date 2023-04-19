#include<stdio.h>//bubble sort
int main()
{
	int ar[50],n,i,j,temp,k;
	printf("Enter the number of element in array :: ");
	scanf("%d",&n);
	printf("Enter the element of the array :: ");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if (ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
		printf("\nArray elements are after %d pass :: ",i+1);
		for(k=0;k<n;k++)
		printf("%3d",ar[k]);
	}
	printf("\nSorted array  ::  ");
	for(i=0;i<n;i++)
	printf("%3d",ar[i]);
	return 0;
}
