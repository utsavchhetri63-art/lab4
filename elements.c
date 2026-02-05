// elements
#include<stdio.h>
int main()
{
    int a[10], i;
    printf("enter 10 elements \n");
    for ( i=0; i<10; i++)
    {
        scanf("%d", & a[i]);
    }
    printf(" array elements are\n");
    for ( i=0; i<10;i++)
    {
        printf("%d\t" , a[i]);
    }
    return 0;
}