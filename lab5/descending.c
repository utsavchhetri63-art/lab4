#include<stdio.h>
int main()
{
    int a[100],n,i,J,temp;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        for(J=i+1; J<n; J++)
        {
            if (a[i]<a[J])
            {
                temp=a[i];
                a[i]=a[J];
                a[J]= temp;
            }
        }
        printf("The element is in descending order\n");
        for (i=0; i<n; i++)
        {
            printf("%d\t",a[i]);
        }

    }
    printf("\n2nd largest element is %d\n",a[1]);
    printf("3rd largest element is %d\n",a[2]);
    return 0;
}