#include <stdio.h>
#include <stdlib.h>
void rearrange_alternate_positions(int arr[], int n)
{
    int temp,i,j;
    for(i = 1; i < n; i++)
    {
        temp = arr[i];
        if (temp > 0)
            continue;
        j = i - 1;
        while ( arr[j] > 0 && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
