// p*q and find the minimum element of the matrix
#include<stdio.h>
int main()
{
    int M[10][10],i,J,p,q,min;
    printf("Enter the value of p and c\n");
    scanf("%d%d",&p,&q);
    printf("Enter the matrix of order %d*%d rowwies\n",p,q);
    for (i=0;i<p;i++)
    {
        for (J=0;J<q;J++)
        {
            scanf("%d",&M[i][J]);
        }
    }
    min = M[0][0] ; //assume
    // finding manimun element
    for (i=0;i<p;i++)
    {
        for (J=0;J<q;J++)
        {
            if (M[i][J]<min)
            {
                min=M[i][J];
            }
        }
    }
    printf("The minimun element of matrix is %d\n" , min);
    return 0;
}