// r1*c1 and r2*c2 . And perform matrix multiplication if possible
#include<stdio.h>
int main()
{
    int M1[10][10],M2[10][10],M3[10][10]={0},r1,c1,r2,c2,i,J,k;
    printf("Enter the value of r1,c1,r2 and c2\n");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix Multiplication cannot be performed\n");
    }
    else 
    {
         printf("Enter the first matrix of order %d*%d rowwise\n",r1,c1);
        for (i=0;i<r1;i++)
        {
            for (J=0;J<c1;J++)
            {
                scanf("%d",&M1[i][J]);
            }
        }
    

    printf("enter the secong matrix of order %d*%d rowise\n",r2,c2);
    for (i=0;i<r2;i++)
    {
        for (J=0;J<c2;J++)
        {
            scanf("%d",&M2[i][J]);
        }
     }
     // To perform matrix selcetion 
      for (i=0;i<r1;i++)
     {
        for (J=0;J<c2;J++)
        {
            for (k=0;k<c1; k++)
            {
                M3[i][J]= M3[i][J] + M1[i][k] * M2[k][J];
            }

        }
     }
     printf("The resultant multiplication matrix is \n");
      for(i=0;i<r1;i++) 
     {
        for(J=0;J<c2;J++)
        {
            printf("%d",M3[i][J]);
        }
        printf("\n");
     }   
     } 
       return 0;
}