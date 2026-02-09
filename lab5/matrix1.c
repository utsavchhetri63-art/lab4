// matrix of orde r*c
#include <stdio.h>
int main()
{
    int M[10][10],r,c,i,J;
    printf("Enter the value of r and c\n");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix of order %d*%d rowwise \n",r,c);
    for (i=0;i<r;i++)
    {
        for(J=0;J<c;J++)
        {
            scanf("%d", &M[i][J]);
        }
    }
    printf("The matrix of order %d*%d rowwise is \n",r,c);
    for(i=0;i<r;i++)
    {

         for(J=0;J<c;J++)
         {
             printf("%d\t",M[i][J]);

         }
          printf("\n");
    }
   
        return 0;
}