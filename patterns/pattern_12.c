/*

*****
 *****
  *****
   *****
    *****

*/

#include<stdio.h>
int main()
{
	int i,j,n=5,k;
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		while(k)
		{
			printf(" ");
			--k;
		}
	}
}

