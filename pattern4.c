/*
A
A B
A B C
A B C D*/

#include<stdio.h>
int main()
{
    char i,j;
    for(i=65 ; i<=68; i++)
    {
        for(j=65; j<=i; j++)
        {
            printf("%c\t",j);
        }
        printf("\n");
    }
    return 0;
}