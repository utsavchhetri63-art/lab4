 // two 3*4 matrix
#include <stdio.h>
int main()
{
    int M1[3][4],M2[3][4],s[3][4],i,J;
    printf("Enter the matrix M1 of order 3*4 rowwiese\n");
    for (i=0;i<3;i++)
    {
        for (J=0;J<4;J++)
        {
            scanf("%d",&M1[i][J]);
        }
    }
   printf("Enter the matrix M2 of order 3*4 rowwiese\n"); 
   for (i=0;i<3;i++)
    {
        for (J=0;J<4;J++)
        {
            scanf("%d",&M2[i][J]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(J=0;J<4;J++)
        {
            s[i][J]= M1[i][J] + M2[i][J];
        }
    }
    printf(" The summation of matrix is \n");
    for(i=0;i<3;i++)
    {
        for(J=0;J<4;J++)
        {
            printf("%d\t",s[i][J]);
        }
        printf("\n");
    }
    return 0;
}