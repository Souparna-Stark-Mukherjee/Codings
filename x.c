// C program to illustrate 
// command line arguments 
#include<stdio.h> 
  
int main(int a,char* b[]) 
{ 
    int counter; 
    printf("Program Name Is: %s",b[0]); 
    if(a==1) 
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
    if(a>1) 
    { 
        printf("\nNumber Of Arguments Passed: %d",a); 
        printf("\n----Following Are The Command Line Arguments Passed----"); 
        for(counter=0;counter<a;counter++) 
        printf("\n b[%d]: %s\n",counter,b[counter]); 
    } 
    return 0; 
}  
