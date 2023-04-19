/*C program to find out common elements from two arrays given by user*/
#include<stdio.h>
#define s 1000
int c_e(int a1[],int l1,int a2[],int l2)
{
    int i,j,k=0,arr[s],c=0;
    for(i=0;i<l1;i++)
	{
        for(j=0;j<l2;j++) 
		{
			if(a1[i]==a2[j])
			{
				arr[k++]=a1[i];
				c++;
			}  
       }
    } 
    if(c==0)
      printf("\n...No common elements present...");
    else
    {
    	printf("Common elements are :: ");
        for(i=0;i<k;++i)
    	    printf("%3d",arr[i]);
	}  
}
int main() 
{
    int a1[s],a2[s],l1,l2,i; 
    printf("Enter the size of 1st array :: ");
    scanf("%d",&l1);
    printf("Enter the %d elements :: \n",l1);
    for(i=0;i<l1;++i)
        scanf("%d",&a1[i]);
   printf("Enter the size of 2nd array :: ");
   scanf("%d",&l2);
   printf("Enter the %d elements :: \n",l2);
   for(i=0;i<l2;++i)
        scanf("%d",&a2[i]);
   c_e(a1,l1,a2,l2);
   return 0;
}
