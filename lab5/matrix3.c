// p*q and find its transpose

#include <stdio.h>
int main()
{
    int p,q,M[p][q],T[q][p],i,J;
    printf("Enter the matrix of order p*q rowwiese\n");
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
    for(i=0;i<p;i++)
    {
        for(J=0;J<q;J++)
        {
            printf("%d\t",T[i][J]);
        }
        printf("\n");
    }
    return 0;
}