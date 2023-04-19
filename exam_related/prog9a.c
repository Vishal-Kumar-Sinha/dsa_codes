#include <stdio.h>
int main()
{
    int n,i,j,t;
    int arr[100]; 
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);//accepting size of array
    printf("ENTER THE INTEGERS \n", n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//accepting the elements
    }
    for (i=1;i<n;i++)
    {
	    j = i;
            while (j>0 && arr[j-1]>arr[j])//comparing among elements
            {	        
                t = arr[j];           //Swapping elemnts
                arr[j] = arr[j-1];   //Swapping elemnts
                arr[j-1] = t;       //Swapping elemnts
                j--;
            }
    }
    printf("THE ARRAY IN SORTED ORDER IS: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);//printing the array
    }
    return 0;
}
