#include <stdio.h>
#include <stdlib.h>
void rearrange_alternate_positions(int arr[], int n)
{
    int i,j;
    j = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
int main()
{
    int n,i;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nInput the array elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    system("cls");
    printf("\nOriginal array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    rearrange_alternate_positions(arr, n);
    printf("\nRearranged array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
