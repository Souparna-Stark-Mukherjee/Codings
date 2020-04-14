#include<stdio.h>
int main()
{
	int n,i;
    printf("\nEnter the limit of the array :- ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements into the array :- ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    system("cls");
    printf("\nThe array is :- ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    non_repeating_element(arr,n);
    return 0;
}

int non_repeating_element(int arr[], int n)
{
    int i,j;
    int count = 1;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j] && i!=j)
			break;
        }
        if(j == n )
        {
            printf("\nNon-repeating element [%d] :- %d \n",count,arr[i]);
            ++count;
        }
    }
    if(j != n )
    printf("\nNon-repeating elements :- None.");
    return -1;
}
