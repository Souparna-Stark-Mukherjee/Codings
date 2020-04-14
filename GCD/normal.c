#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,gcd;
    printf("\nEnter 1st number :- ");
    scanf("%d",&a);
    printf("\nEnter 2nd number :- ");
    scanf("%d",&b);
    int i;
    for(i=1;i<=a && i<=b;i++)
    {
        if((a%i==0) && (b%i==0))
        {
            gcd = i;
        }
    }
    printf("\nGCD of %d and %d is %d ",a,b,gcd);
    printf("\n");
    return 0;
}
