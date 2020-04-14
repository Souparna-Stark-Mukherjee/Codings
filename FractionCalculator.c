#include <stdio.h>
int main()
{
    int e,f,g,h;
    system("cls");
    printf("\nEnter the numerator for 1st Fraction is :- ");
    scanf("%d",&e);
    printf("\nEnter the denominator for 1st Fraction is :- ");
    scanf("%d",&f);
    system("cls");
    printf("\nEnter the numerator for 2nd Fraction is :- ");
    scanf("%d",&g);
    printf("\nEnter the denominator for 2nd Fraction is :- ");
    scanf("%d",&h);
    if (e < 0 || f < 0 || g < 0 || h < 0) 
	{ 
		printf("\nEnter only positive values please !!\n"); 
		return 1; 
	}
    system("cls");
    if (f==1)
    printf("\nThe 1st Fraction is :-   %d   .\n",e);
    else if(e == f)
    printf("\nThe 1st Fraction is :-   1    .\n");
    else
    printf("\nThe 1st Fraction is is :- %d / %d .\n",e,f);
    if (h==1)
    printf("\nThe 2nd Fraction is :-   %d    .\n",g);
    else if(g == h)
    printf("\nThe 2st Fraction is :-   1    .\n");
    else
    printf("\nThe 2nd Fraction is :- %d / %d .\n",g,h);
    Frac(e,f,g,h);
    return 0;
}

int Frac(int a, int b, int c, int d)
{
	int x,y,i,j,k,gcd;
	x=(a*d)+(b*c); //numerator
	y=b*d; //denominator
	// Trick part. Reduce it to the simplest form by using gcd.
	for(i=1; i <= x && i <= y; ++i)
	{
	    if(x%i==0 && y%i==0)
	    gcd = i;
	}
	j=x/gcd;
	k=y/gcd;
	if (k==1)
	printf("\n\nThe added fraction is :- %d .\n",j);
	else
	printf("\n\nThe added fraction is :- %d / %d .\n",j,k);
}
	
