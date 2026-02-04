#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("enter the value of n\n");
    scanf("%d",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of array in reverse order is\n");
    for(i=n-1; i>=0; i--)
    {
    printf("%d\t",a[i]);
    }
    return 0;
}
