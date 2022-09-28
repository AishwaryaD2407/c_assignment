/*

*
**
***
****
*****
 ****
  ***
  **
  *

 */

#include<stdio.h>
int main()
{
	int i,j,I,n=5,k;
	for(i=-(n-1);i<n;i++)
	{
		if(i>0)
			k=i;
		while(k)
		{
			printf(" ");
			--k;
		}
		if(i<0)
			I=-i;
		else
			I=i;
		for(j=1;j<n+1-I;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


