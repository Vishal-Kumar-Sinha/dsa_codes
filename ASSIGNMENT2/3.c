#include<stdio.h>//modified bubble sort
int main()
{
	int n,i,j,temp,k;
	printf("Enter the number of elements :: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the %d elements :: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<n-1;i++)
	{   
	    int swaps=0;
		for(j=0;j<n-1;j++)
		{
			if (ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
				swaps++;			
			}
		}
		if(swaps==0)
			break;
		printf("\nArray elements are after %d pass :: ",i+1);
		for(k=0;k<n;k++)
		printf("%3d",ar[k]);
		if(swaps==0)
			break;
	}
	printf("\n\nSorted array :: ");
	for(i=0;i<n;i++)
	printf("%3d",ar[i]);
	return 0;
}
