/*

 *****
  ****
   ***
    **
     *

 */

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=0;i<n;i++,printf("\n"))
	{
		for(j=0;j<n;j++)
		{
			if(j<i)
				printf(" ");
			else
				printf("*");
		}
	}
}

       
