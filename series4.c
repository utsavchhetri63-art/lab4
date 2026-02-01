// x+ x^3/3! +  x^5/5!  + ......... + n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j;
    float x,f,s=1.0;
    printf("enter the term\n");
    scanf("%d",&n);
    printf("enter the  value of x\n");
    scanf("%f",&x);
    for(i=1; i<=n; i++)
    {
        f=1.0;
        for(j=1; j<=(2*i-1);j++)
        {
            f=f*j;
        }
        s= s + pow(x,(2*i-1))/f;
    }
    printf("sum is %f",s);
return 0;

}
