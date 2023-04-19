#include <stdio.h>//binary rearch
int main()
{
    int n,i,j,find,count=1,temp;
    printf("Enter total numbers :: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d numbers :: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    int a=0,z,r,key;
    z=n-1;
    printf("Enter the number to find :: ");
    scanf("%d",&key);
    while(a<=z)
    {
        r=(a+z)/2;
        if(arr[r]>key)
            z=r-1;
        if(arr[r]<key)
            a=r+1;
        if(arr[r]==key)
        {
            printf("%d found at location %d.\n",key,r+1);
            break;
        }
        if(a>z)
            printf("\t...Not found!...\n %d isn't present in the array.");
        count++;
    }
    printf("\nNumber of comparisons :: %d",count);
    return 0;
}
