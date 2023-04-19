

#include <stdio.h>

int addarray(int A[],int m,int B[],int n,int C[]){
    for(int i=0;i<m;i++){
        C[i]=A[i];
    }
    for(int j=0;j<n;j++){
        C[j]=C[j]+B[j];
    }
    
}
int max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int s1;
    printf("\nEnter the number of terms in the polynomial A:\n");
    scanf("%d",&s1);
    int A[s1];
    for(int i=0;i<s1;i++){
        printf("Enter the coeff of X^%d of polynomial A: ",i);
        scanf("%d",&A[i]);
    }

    int s2;
    printf("\nEnter the number of terms in the polynomial B:\n");
    scanf("%d",&s2);
    int B[s2];
    for(int j=0;j<s2;j++){
        printf("Enter the coeff of X^%d of polynomial B: ",j);
        scanf("%d",&B[j]);
    }
    
    
    int p=max(s1,s2);
    int C[1000]={0};
    for(int i=0;i<p;i++){
        addarray(A,s1,B,s2,C);
    }
    printf("The sum of the two polynomials A and B is--->");
    for(int i=0;i<p;i++){
        printf("%d*x^%d + ",C[i],i);   
    }
    
    return 0; 
}
