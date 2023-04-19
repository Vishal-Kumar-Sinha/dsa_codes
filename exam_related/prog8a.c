#include <stdio.h>
#include <math.h>
void toh(int n,char S,char D,char T)
{
    if(n>=1)
    {
        toh(n-1,S,T,D);
        printf("Move disc from tower %c to tower %c\n",S,D);
        toh(n-1,T,D,S);
    }
}
int main()
{
    int n;
    printf("Enter number of discs: ");
    scanf("%d",&n);
    toh(n,'S','D','T');
    printf("Number of moves=%d",(int) pow(2,n)-1);
    return 0;
}
