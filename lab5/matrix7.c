// r*c and find the sum of each row and each column of matrix and display it 

#include<stdio.h>
int main()
{
   int r,c,M[10][10],i,J,rowsum=0,colsum=0;
    printf("Enter the value of r and c\n");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix of order %d*%d rowwies\n",r,c);
    for (i=0;i<r;i++)
    {
        for (J=0;J<c;J++)
        {
            scanf("%d",&M[i][J]);
        }
    }
    // row sum
    for (i=0;i<r;i++)
    {
            rowsum = 0;
        for (J=0;J<c;J++)
        {
            rowsum = rowsum + M[i][J];
        }
           printf("Row %d sum = %d\n", i+1, rowsum);
    }
    // column sum
    for (i=0;i<r;i++)
    {
        colsum = 0;
        for (J=0;J<c;J++)
        {
            colsum =colsum + M[i][J];
        }
           printf("column %d sum = %d\n", i+1, colsum);
    }
    return 0;

}