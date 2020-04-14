#include<stdio.h>
#include<stdlib.h>
//#include<conio.h> donot use this. it is obsolate in todays new compiler 
int main()
{
	int i,n;
	printf("Enter the Limit of the array :- ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the a[%d] elemnent :- ",i);
		scanf("%d",&a[i]);
	}
	system("cls");
	printf("\nThe array elements are:- ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	repeating_element(a,n);
    return 0;
}

int repeating_element(int arr[], int n)
{
    int i,j;
    int c[n];
    for(i=0;i<n;i++)
    	c[i] = 0;
    printf("Repeating elements are :- ");
    for(i = 0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            	c[i]=arr[j];
            }
        }
    }
    if(c[i] == "1")
    {
		printf("None");
	}
    else
    {
    	for (i=0;i<n;i++)
		{
			if(c[i]!=0)
				printf("%d ",c[i]);
		}
	}
}
