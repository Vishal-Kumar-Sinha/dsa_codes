#include <stdio.h>
int main()
{
    int arr[100],c,i,n;
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d",&n);//accepting the size of the array
    printf("ENTER THE ELEMENTS: \n");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);//accepting the elements
    printf("ENTER THE ELEMENT TO BE SEARCHED: ");
    scanf("%d",&c);//accepting the element to be searched
    for (i=0;i<n;i++)
    {
        if (arr[i]==c)
        {
            printf("%d IS PRESENT AT:  %d",c,i+1);
            break;
        }
    }
    if (i==n)
        printf("THE ELEMENT IS NOT PRESENT IN THE ARRAY");
    return 0;
}
