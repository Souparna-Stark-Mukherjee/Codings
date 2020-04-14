#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter 1st number :- ");
    scanf("%d",&a);
    printf("\nEnter 2nd number :- ");
    scanf("%d",&b);

    printf("\nGCD of %d and %d :- %d\n", a, b, gcd(a,b));
    return 0;
}

int gcd(int a, int b)
{
    if (b != 0)
    return gcd(b, a % b);
    else
    return a;
}
