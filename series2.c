// sum of -x +x^2/2! - x^3/3! + x^4/4! + ..........n terms
#include <stdio.h>
#include <math.h>
int main()
{
   
    int n, i,j;
    float x, f,s=0; 
    printf("Enter the number of terms\n ");
    scanf("%d", &n);
    printf("Enter the value of number\n ");
    scanf("%f",&x);
    for(i = 1; i <= n; i++)
    {
        f= 1.0;
        for(j = 1; j <= i; j++)
        {
            f = f*j;
        }
        s = s + pow(-1,i)* pow(x,i)/f ;
    }
    printf("Sum of the series is: %f\n", s);
    return 0;
}
