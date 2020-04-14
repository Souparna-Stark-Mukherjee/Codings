//Algorithm
//Input the end_value up to which binary numbers have to be generated.
//Perform modulo operation to the number by 2 and divide the number by 2 after storing the remainder of the modulo operation in an array.
//Repeat the same procedure until the number becomes less than or equal to zero.
//Output the array from the end to get the equivalent binary numbers.
#include <stdio.h>
#include <stdlib.h>
void binary_number(int n)
{
    int bin_num[1000];
    int j,i = 0;
    while (n > 0) {
        bin_num[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
        printf("%d",bin_num[j]);
    printf("\n");
}
void binary_number_generation(int n)
{
    int i;
	for(i = 0; i<= n; i++)
    {
        binary_number(i);
    }
}
int main()
{
    int n;
    printf("Enter the end value : ");
    scanf("%d",&n);
    printf("\nBinary numbers from 1 to %d : ",n);
    printf("\n");
    binary_number_generation(n);
}
