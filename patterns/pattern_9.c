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
		k=i;
		if(i<0)
			I=-i;
		else
			I=i;
		if(i<0)
			while(k)
			{
				printf(" ");
				k++;
			}
		for(j=1;j<n+1-I;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

