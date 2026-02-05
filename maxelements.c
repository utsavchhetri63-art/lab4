// max elements
#include<stdio.h>
int main()
{
    int a[100],n,i,max;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the elements in array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    max=a[0];//assume
    for(i=1; i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum element is %d",max);
    return 0;

}