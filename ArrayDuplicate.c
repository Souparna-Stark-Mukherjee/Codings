#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter the Limit of the array :- ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elemnents in the array :- ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	system("cls");
	printf("\nThe array elements are:- ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	repeating_element(a,n);
    return 0;
}

int repeating_element(int arr[], int n)
{
    int i,j;
    printf("Repeating elements are :-");
    for(i = 0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            printf("%d ",arr[j]);
        }
    }
}
