//  sum of the 1! + 3! + 5! + ........+ n terms
#include <stdio.h>
int main()
{
    int n, i, j, f,s=0;
    printf("Enter the number of terms\n ");
    scanf("%d", &n);
    for(i = 1; i <= n; i += 2)
    {
        f= 1;
        for(j = 1; j <= i; j++)
        {
            f = f*j;
        }
        s = s + f;
    }
    printf("Sum of the series is: %d\n", s);
    return 0;
}