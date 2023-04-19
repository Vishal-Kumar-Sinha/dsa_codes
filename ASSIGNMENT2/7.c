#include <stdio.h>
int main()
{
    int m,n,size,k=0,i,j;
    printf("Enter row and column length :: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the numbers :: ");
    for(i=0;i<m;i++) 
	{
        for(j=0;j<n;j++)
	    {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
                size++;
        }
    } 
    int cmm[3][size];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j]!=0)
            {
                cmm[0][k] = i;
                cmm[1][k] = j;
                cmm[2][k] = a[i][j];
                k++;
            }
            printf("3 Tuple Representation :: \n");         
      for(i=0;i<3;i++)
    {
        for(j=0;j<size;j++)
            printf("%3d",cmm[i][j]);
        printf("\n");
    }
  return 0;
}
