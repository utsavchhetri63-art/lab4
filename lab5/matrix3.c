// p*q and find its transpose

#include <stdio.h>
int main()
{
    int p,q,M[10][10],T[10][10],i,J;
    printf("Enter the value of p and q\n");
    scanf("%d%d",&p,&q);
     printf("Enter the matrix of order %d*%d rowwiese\n",p,q);
    for (i=0;i<p;i++)
    {
        for (J=0;J<q;J++)
        {
            scanf("%d",&M[i][J]);
        }
    }
  //transpose a matrix
    for(i=0;i<p;i++)
    {
        for(J=0;J<q;J++)
        {
            T[J][i]= M[i][J] ;
        }
    }
    printf(" The transpose of matrix is \n");
    for(i=0;i<q;i++)
    {
        for(J=0;J<p;J++)
        {
            printf("%d\t",T[i][J]);
        }
        printf("\n");
    }
    return 0;
}