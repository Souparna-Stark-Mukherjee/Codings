#include<stdio.h>
#include<stdlib.h>
int main(int a,char *b[])
{
    int n1,n2,min,i,gcd=1;
    if(a!=3)
	{
        printf("Error!!\nTry again.\nHelp - Please enter two argument.\n");
        exit(1);
    }
    n1=atoi(b[1]);
    n2=atoi(b[2]);
    min=(n1<n2)?n1:n2;
    for(i=1;i<=min;i++)
    {
        if((n1%i)==0 && (n2%i)==0)
        gcd=i;
    }
    system("cls");
    printf("\n\nGCD of two number :- %d\n",gcd);
    return 0;
}

