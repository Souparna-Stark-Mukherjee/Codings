#include<stdio.h>
int main(int a, char *b[]) 
{ 
	int c, d, e, f, g, h, i, j, k, l;
	if (a < 5 || a > 5) 
	{ 
		printf("enter 4 arguments only eg.\"filename.exe N1 D1 N2 D2!!\""); 
		return 0; 
	}
	c = atoi(b[1]); 
	d = atoi(b[2]); 
	e = atoi(b[3]);
	f = atoi(b[4]);
	if (c < 0 || d < 0 || e < 0 || f < 0) 
	{ 
		printf("\nenter only positive values in arguments !!\n"); 
		return 1; 
	}
	system("cls");
    if (d==1)
    printf("\nThe 1st Fraction is :-   %d   .\n",c);
    else if(c == d)
    printf("\nThe 1st Fraction is :-   1    .\n");
    else
    printf("\nThe 1st Fraction is :- %d / %d .\n",c,d);
    if (f==1)
    printf("\nThe 2nd Fraction is :-   %d    .\n",e);
    else if(e == f)
    printf("\nThe 2st Fraction is :-   1    .\n");
    else
    printf("\nThe 2nd Fraction is :- %d / %d .\n",e,f);
	g=(c*f)+(e*d); //numerator
	h=f*d; //denominator
	// Trick part. Reduce it to the simplest form by using gcd.
	for(i=1; i <= g && i <= h; ++i)
	{
	    if(g%i==0 && h%i==0)
	    l = i;
	}
	j=g/l;
	k=h/l;
	if (k==1)
	printf("\n\nThe added fraction is :- %d .\n",j);
	else
	printf("\n\nThe added fraction is :- %d / %d .\n",j,k);
	return 0; 
} 

