#include<stdio.h>
#include<stdlib.h>
int main()
	{
	    system("cls");
		int i,j,c,r,k=0,l=0,b,d;
	    printf("\nInput the number of Rows :- ");
	    scanf("%d",&r);
	    printf("\nInput the number of Columns :- ");
	    scanf("%d",&c);
	    if (r>0 && c>0)
	    {
	    	int a[r][c];
		    printf("\nInput the 2D matrix :- ");
		    for(i=0;i<r;i++)
	    	{
	        	for(j=0;j<c;j++)
	        	{
	            	scanf("%d",&a[i][j]);
	        	}
	    	}
	    	system("cls");
	    	printf("\a");
	    	printf("\nThe 2D Matrix is :- \n");
	    	for(i=0;i<r;i++)
	    	{
	        	for(j=0;j<c;j++)
	        	{
	            	printf("%d ",a[i][j]);
	        	}
	        	printf("\n");
	    	}
	    	printf("\nSpiral Matrix is :- \n");
	    	while(k<r && l<c)
	    	{
		        for(i=l;i<c;i++)
		        {
		            printf("%d ",a[k][i]);
		        }
		        k++;
		        for(i=k;i<r;i++)
		        {
		            printf("%d ",a[i][c-1]);
		        }
		        c--;
		        if(k<r)
		        {
		            for(i=c-1;i>=0;--i)
		            {
		                printf("%d ",a[r-1][i]);
		            }
		            r--;
		        }
		        if(l<c)
		        {
		            for(i=r-1;i>=k;i--)
		            {
		                printf("%d ",a[i][l]);
		            }
		            l++;
		        }
		    }
		    printf("\n\nPress 0 - Exit\n");
		}
		else
		{
		  printf("\nThe value entered by you for rows and column are invalid.");
		  printf("\n\n1 - Help.\n2 - Exit.\n");
		  scanf("%d",&b);
		  switch(b) 
		    {
			    case 1: printf("\nThe value of rows or columns cannot be zero(0) for a 2D Matrix Formation.\n2D matrix Formation requires -> [rows]x[columns] != 0.\n\nPlease press \"ESC\" to terminate the Application Window.");
						break;
			    default:system("cls"); 
						printf("\n\n\tPlease press \"ESC\" to terminate the Application Window.");
			}
		}
	    return 0;
	}
