#include<stdio.h>
void TOH(char x,char y,char z,int n)
{
    if(n>0)
    {
        TOH(x,z,y,n-1);
        printf("\n%c to %c",x,y);
        TOH(z,y,x,n-1);
    }
}
int main()
{
    int n=3;
    TOH('A','B','C',n);
}
