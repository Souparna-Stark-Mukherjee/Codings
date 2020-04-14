//Using Command Line Argument
//The given number N, a positive integer, will be passed to the program using the first command line parameter.
//If it is a strong number, the output should be YES, If it is not a prime number then output should be NO to stdout.
//Other than YES or NO, no other extra information should be printed to stdout.

#include<stdio.h>
#include<stdlib.h>
int main(int a, char *b[])
{
int number, i, temp, sum = 0, factorial = 1;
number = atoi(b[1]);
temp = number;
while(number != 0)
{
int rem = number%10;
for(i=2; i<=rem; i++)
{
factorial = factorial * i;
}
sum = sum + factorial;
number = number/10;
factorial = 1;
}
if(temp == sum)
printf("YES");
else
printf("NO");
return 0;
}
