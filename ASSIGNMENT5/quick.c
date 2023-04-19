#include<stdio.h>
void quicksort(int x[],int first,int last)
{
    int pivot,j,temp,i;
    if(first<last)
	{
        pivot=first;
        i=first;
        j=last;
        while(i<j)
		{
            while(x[i]<=x[pivot]&&i<last)
                i++;
            while(x[j]>x[pivot])
                j--;
            if(i<j)
			{
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);
    }
}
int main()
{
    int size,i;
    printf("\nEnter size of the array :: ");
    scanf("%d",&size);
    int x[size];
    printf("\nEnter the %d elements :: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&x[i]);
    quicksort(x,0,size-1);
    printf("\nSorted aray :: ");
    for(i=0;i<size;i++)
        printf("%4d",x[i]);
    return 0;
}
