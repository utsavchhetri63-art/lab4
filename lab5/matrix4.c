// 4*4 and sum of diagoanl
#include<stdio.h>
int  main()
{
    int M[4][4],i,J,S=0;
    printf("Enter the matix of order 4*4 rowwise\n");
    for (i=0;i<4;i++)
    {
        for (J=0;J<4;J++)
        {
            scanf("%d",&M[i][J]);
        }
    }
    /*Summing main digonal element*/
    for (i=0;i<4;i++)
    {
        for (J=0;J<4;J++)
        {
          if (i==J)
            {
                S=S+M[i][J];
            }
        }
    }
    printf("The sum of Main diagonal element is %d",S);
    return 0;
}